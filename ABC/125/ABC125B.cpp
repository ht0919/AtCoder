#include<iostream>
using namespace std;
int main() {
    int N,ans=0;
    cin >> N;
    int C[N],V[N],a[N];
    for (int i=0; i<N; i++) cin >> V[i];
    for (int i=0; i<N; i++) cin >> C[i];
    for (int i=0; i<N; i++) a[i] = V[i] - C[i];
    for (int i=0; i<N; i++) if (a[i] > 0) ans += a[i];
    cout << ans << endl;
    return 0;
}
