#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i=0; i<N; i++) cin >> A[i];
    double a = 0.0;
    for (int i=0; i<N; i++) a += 1.0 / A[i];
    double b = 1.0 / a;
    cout << b << endl;
    return 0;
}
