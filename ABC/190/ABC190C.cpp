#include <iostream>
using namespace std;
int n,m,a[105],b[105],k,c[105],d[105],ans=0;
int main() {
	cin>>n>>m;
	for (int i=1; i<=m; i++) cin>>a[i]>>b[i];
	cin>>k;
	for (int i=1; i<=k; i++) cin>>c[i]>>d[i];
	for (int i=0; i<(1<<k); i++) {
		int is[105]={0},cnt=0;
		for (int j=1; j<=k; j++)
            if (i & (1<<j-1)) is[c[j]]=1;
            else is[d[j]]=1;
		for (int j=1; j<=m; j++)
            if(is[a[j]] && is[b[j]]) cnt++;
		ans=max(ans,cnt);
	}
	cout<<ans<<endl;
    return 0;
}