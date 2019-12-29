#include <iostream>
using namespace std;
int main() {
    long long A,B,K;
    cin >> A >> B >> K;
    if (A <= K) {
        K = K - A; A = 0;
    } else {
        A = A - K; K = 0;
    }
    if (B <= K) {
        K = K - B; B = 0;
    } else {
        B = B - K; K = 0;
    }
    cout << A << ' ' << B << endl;
    return 0;
}
