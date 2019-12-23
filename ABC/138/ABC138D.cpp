#include <iostream>
using namespace std;
int n, q;
int a[1000000];
int ans[1000000];
int main() {
    cin >> n >> q;
    a[1] = 1;
    for(int i=1; i<n; i++) {
        int x, y;
        cin >> x >> y;
        a[y] = x;
        ans[i] = 0;
    }
    for(int i=1; i<=q; i++) {
        int x, y;
        cin >> x >> y;
        ans[x] += y;
    }
    for (int i=2; i<=n; i++)
        ans[i] += ans[a[i]];
    for (int i=1; i<=n; i++)
        cout << ans[i] << " ";
    return 0;
}
