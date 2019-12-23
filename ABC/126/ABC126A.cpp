#include<iostream>
using namespace std;
int main() {
    int N,K;
    string S;
    cin >> N >> K >> S;
    char a = S[K-1];
    a += 0x20;
    S[K-1] = a;
    cout << S << endl;
    return 0;
}
