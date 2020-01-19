#include <iostream>
using namespace std;
int P[2*100000];
int main() {
    int N,cnt=1;
    cin >> N;
    for (int i=0; i<N; i++) cin >> P[i];
    int m=P[0];
    for (int i=1; i<N; i++) {
        if (P[i] <= m) {
            cnt++;
            m = P[i];
        }
    }
    cout << cnt << endl;
    return 0;
}