#include<iostream>
using namespace std;
int main() {
    int N,K,cnt=0;
    cin >> N >> K;
    for (int i=1; i<=N; i+=2,cnt++)
        ;
    if (cnt >= K)
        cout << "YES" << endl;
    else
        cout << "NO"  << endl;
    return 0;
}
