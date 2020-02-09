#include <algorithm>
#include <iostream>
using namespace std;
int N,A[200000];
int main() {
    cin >> N;
    for (int i=0; i<N; i++) cin >> A[i];
    sort(A, A+N);
    string ans="YES";
    for (int i=0; i<N-1; i++) {
        if (A[i] == A[i+1]) {
            ans = "NO";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}