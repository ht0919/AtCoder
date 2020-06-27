#include <bits/stdc++.h>
using namespace std;
int n,m,K,ans;
long long a[200004],b[200004];
int main() {
	cin>>n>>m>>K;
	for (int i=1; i<=n; i++) cin>>a[i],a[i]=a[i-1]+a[i];
	for (int i=1; i<=m; i++) cin>>b[i],b[i]=b[i-1]+b[i];
	for (int i=0; i<=n; i++) {
        if(K>=a[i]) {
		    int res = upper_bound(b+1, b+1+m, K-a[i]) - b - 1;
		    ans = max(ans, res+i);
	    }
    }
	cout<<ans;
    return 0;
}