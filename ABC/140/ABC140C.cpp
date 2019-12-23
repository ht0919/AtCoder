#include <iostream>
using namespace std;
int main() {
    int N,cnt=0;
    cin >> N;
    int A[N],B[N-1];
    for (int i=0; i<N-1; i++) {
        cin >> B[i];
        A[i+1] = B[i];
    }
    A[0] = A[1];
    for (int i=0; i<N-1; i++) {
        if (A[i] > A[i+1]) A[i] = A[i+1];
    }
    for (int i=0; i<N; i++) cnt += A[i];
    cout << cnt << endl;
    return 0;
}