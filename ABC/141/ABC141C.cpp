#include <iostream>
using namespace std;
int N,K,Q;
int A[100000];
int S[100000];
int main() {
    cin >> N >> K >> Q;
    for (int i=0; i<N; i++) S[i] = K;
    for (int i=0; i<Q; i++) {
        scanf("%d", &A[i]);
    }

    for (int i=0; i<N; i++) S[i] -= Q;
    for (int i=0; i<Q; i++) S[A[i]-1]++;

    for (int i=0; i<N; i++) {
        if (S[i] > 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
