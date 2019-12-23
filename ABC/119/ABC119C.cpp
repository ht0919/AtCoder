#include<iostream>
using namespace std;
int n,Q[4],a[10],ans=1e9;
void DFS(int x, int S, int v) {
	if (x == 4){
		if (!v) {
			cout<<"";
		}
		ans = min(ans, v);
		return;
	}
	for (int i=1; i<(1<<n); ++i) {
		if (i&S) continue;
		int cnt=0, sum=0;
		for (int j=0; j<n; ++j)
			if (i&(1<<j)) cnt++, sum+=a[j];
		DFS(x+1, S|i, v+abs(sum-Q[x])+(cnt-1)*10);
	}
}
int main() {
	cin >> n >> Q[1] >> Q[2] >> Q[3];
	for (int i=0; i<n; ++i) cin >> a[i];
	DFS(1,0,0);
    cout << ans << endl;
}
