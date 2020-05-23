#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#define ll long long
using namespace std;

ll T,a,b,c,d,n;
map<ll,ll> g;

ll f(ll n) {
	if (g[n] == 0&&n) g[n]=1e18; else return g[n];
	ll ans=1e18;
	if (d<1e18/n) ans=min(ans,d*n);
	ans=min(ans,f(n/2)+a+(n%2)*d);
	ans=min(ans,f(n/2+1)+a+(2-n%2)*d);
	ans=min(ans,f(n/3)+b+(n%3)*d);
	ans=min(ans,f(n/3+1)+b+(3-n%3)*d);
	ans=min(ans,f(n/5)+c+(n%5)*d);
	ans=min(ans,f(n/5+1)+c+(5-n%5)*d);
	g[n]=ans;
	return ans;
}

int main() {
	scanf("%lld",&T);
	while (T--) {
		scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&c,&d);
		g.clear();
		g[0]=0,g[1]=d,g[2]=min(d*2,d+a);
		printf("%lld\n",f(n));
	}
}