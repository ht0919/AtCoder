#include <iostream>
using namespace std;
int n,k,a[10][10],ans,f[10];
void dfs(int u, int sum, int s) {
	f[u] = 1;
	for (int i=1; i<=n; i++)
	    if (!f[i]) dfs(i, sum+1, s+a[u][i]);
	if (sum==n&&a[u][1]+s==k) ans++;
	f[u]=0;
}
int main() {
	scanf("%d%d",&n,&k);
	for(int i=1; i<=n; i++)
	    for(int j=1; j<=n; j++) scanf("%d",&a[i][j]);
	dfs(1,1,0);
	printf("%d",ans);
	return 0;
}