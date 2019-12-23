#include<bits/stdc++.h>
using namespace std;
vector <tuple <string, int, int>> S;
int main() {
    int N;
    string s;
    int t;
    cin >> N;
    for(int i=0; i<N; ++i) {
        cin >> s >> t;
        S.emplace_back(s, -t, i);
    }
    sort(S.begin(), S.end());
    for(auto x: S)
        cout << get<2>(x)+1 << endl;
    return 0;
}