#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    string S;
    cin >> S;
    int cnt=0;
    vector<int> vec;
    for (int i=0; i<S.length(); i++) {
        if (S[i]=='A'||S[i]=='C'||S[i]=='G'||S[i]=='T') {
            cnt++;
        } else {
            vec.push_back(cnt);
            cnt=0;
        }
    }
    vec.push_back(cnt);
    sort(vec.begin(),vec.end(),greater<int>());
    cout << vec[0] << endl;
    return 0;
}
