#include<stdio.h>
char txt[100001];
int   dp[100001];
int main() {
	int N,Q;
	scanf("%d %d",&N,&Q);
	scanf("%s",txt);
	for(int i=1; i<N; i++) {
	if( txt[i]=='C' && txt[i-1]=='A' ) dp[i]++;
		dp[i] += dp[i-1];
	}
	while (Q--) {
		int l,r;
		scanf("%d %d",&r,&l);
		printf("%d\n",dp[l-1]-dp[r-1]);
	}
}
