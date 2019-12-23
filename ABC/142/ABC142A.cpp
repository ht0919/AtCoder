#include <iostream>
using namespace std;
int main() {
    int N,cnt=0;
    cin >> N;
    for (int i=1; i<=N; i++) {
        if (i % 2 == 1) cnt++;
    }
    double ans = cnt / (double)N;
    cout << ans << endl;
    return 0;
}
