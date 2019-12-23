#include <iostream>
using namespace std;
int main() {
    unsigned long long N, b=10, ans=0;
    cin >> N;
    if (N % 2 == 0) {
        while (b <= N) {
            ans += N / b;
            b *= 5;
        }
    }
    cout << ans << endl;
    return 0;
}