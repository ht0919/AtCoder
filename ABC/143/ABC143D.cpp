#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
int n, ans, l[2005];
int main() {
	scanf("%d", &n);
	rep(i,n) scanf("%d", l+i);
	sort(l, l+n);
	rep(i,n) rep(j,i){
		ans += (int)(lower_bound(l, l+n, l[i]+l[j]) - l) - i - 1;
	}
	printf("%d\n", ans);
}