#include <iostream>
using namespace std;
int N,a[200000],cnt=0;
int main() {
    cin >> N;
    for (int i=0; i<N; i++) cin >> a[i];
    for (int i=0,n=1; i<N; i++) {
        if (a[i] == n) n++;
        else cnt++;
    }
    if (cnt == N) cnt = -1;
    cout << cnt << endl;
    return 0;
}
