#include <iostream>
using namespace std;
int main() {
    int N,K,M;
    cin >> N >> K >> M;
    M *= N;
    int S=0;
    for (int i=0; i<N-1; i++) {
        int a;
        cin >> a;
        S += a;
    }
    cout << (M-S>K ? -1 : max(M-S,0)) << endl;
}