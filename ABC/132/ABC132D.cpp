#include<iostream>
using namespace std;
const int N=2002,mod=1e9+7;
int n,k,c[N][N];
int main() {
	scanf("%d%d",&n,&k);
	for (int i=0; i<=n+1; i++) {
		c[i][0] = 1;
		for (int j=1; j<=i; j++)
            c[i][j] = (c[i-1][j] + c[i-1][j-1]) % mod;
	}
	for (int i=1; i<=k; i++) {
		int ans = 1ll * c[k-1][i-1] * c[n-k+1][i] % mod;
		printf("%d\n", ans);
	}
}
