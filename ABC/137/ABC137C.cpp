#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

long long int nCr(int n, int r){
    long long int num = 1;
    for(int i = 1; i <= r; i++){
        num = num * (n - i + 1) / i;
    }
    return num;
}

int main() {
    int N;
    cin >> N;
    map<string, int> mp;
    for (int i=0; i<N; i++) {
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        auto itr = mp.find(str);
        if( itr != mp.end() ) {
            int n = mp[str]; n++; mp[str] = n;
        } else {
            mp[str] = 1;
        }
    }

    long long int cnt = 0;
    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        if (itr->second > 1) {
            cnt += nCr(itr->second, 2);
        }
    }
    cout << cnt << endl;
    return 0;
}
