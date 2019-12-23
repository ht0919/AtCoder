#include <iostream>
using namespace std;
int main() {
    int N,cnt=0,t1=0,t2=-1;
    cin >> N;
    int A[N],B[N],C[N];
    for (int i=0; i<N;   i++) cin >> A[i];
    for (int i=0; i<N;   i++) cin >> B[i];
    for (int i=0; i<N-1; i++) cin >> C[i];
    for (int i=0; i<N; i++) {
        t1 = A[i];
        cnt += B[t1-1];
        if (t1 == t2+1) cnt += C[t2-1];
        t2 = t1;
    }
    cout << cnt << endl;
    return 0;
}
