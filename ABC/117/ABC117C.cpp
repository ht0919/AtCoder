#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,m,ans=0;
    int a[100005],b[100005];

	cin >> n >> m;
	for(int i=0;i<m;i++)
        cin >> a[i];
	sort(a,a+m);
	for(int i=0;i<m-1;i++)
		b[i]=a[i+1]-a[i];
	sort(b,b+m-1);
	for(int i=0;i<m-n;i++)
	ans+=b[i];
	cout << ans << endl;
	return 0;
}
