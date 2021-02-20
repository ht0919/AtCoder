#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+5;
int n; ll m;
string s;
bool check(ll key) {
	ll sum=0;
	for (int i=0; i<n; i++) {
		if ((m-(s[i]-'0')) / key<sum) return 0;
		sum = sum*key+s[i]-'0';
	}
	return 1;
}
int main() {
	int i,j;
	cin>>s;n=s.length();
	cin>>m;
	if (n==1) {
		cout<<(s[0]-'0'<=m)<<endl;
		return 0;
	}
	ll l=0,r=2e18,d=0;
	for (auto x:s)
		d=max(d,ll(x-'0'+1));
	l=d;
	while (r>l) {
		ll mid=l+r>>1;
		if (check(mid)) l=mid+1;
		else r=mid;
	}
	cout<<l-d<<endl;
	return 0;
}