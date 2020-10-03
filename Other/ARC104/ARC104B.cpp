#include <iostream>
#include <map>
using namespace std;
int main() {
    int n,ans=0; string a; cin>>n>>a;
	for (int i=0;i<n;i++) {
		map <char,int> m;
		for (int j=i; j<n; j++) {
			m[a[j]]++;
			if(m['A']==m['T'] and m['C']==m['G']) ans++;
		}
	}
	cout<<ans<<endl;
    return 0;
}