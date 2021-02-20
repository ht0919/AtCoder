#include <bits/stdc++.h>
using namespace std;
int g1(int x) {
    string tmp = to_string(x);
    sort(tmp.begin(), tmp.end(), std::greater<>());
    return stoi(tmp);
}
int g2(int x) {
    string tmp = to_string(x);
    sort(tmp.begin(), tmp.end());
    return stoi(tmp);
}
int f(int x) {
    return g1(x) - g2(x);
}
int main() {
    int N,K; cin>>N>>K;
    for (int i=0; i<K; i++) {
        N=f(N);
    }
    cout<<N<<endl;
    return 0;
}