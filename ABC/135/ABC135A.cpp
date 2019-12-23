#include<iostream>
using namespace std;
#define L109 1000000000
int main() {
    int A,B,K=0;
    cin >> A >> B;

    if (A==0 || B==0) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    for (; K<L109; K++) {
        if (abs(A-K) == abs(B-K)) break;
    }
    if (K==L109)
        cout << "IMPOSSIBLE" << endl;
    else
        cout << K << endl;
    
    return 0;
}
