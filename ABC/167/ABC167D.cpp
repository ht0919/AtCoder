#include <iostream>
using namespace std;
int main() {
	long long n,k,a[200005],b[200005]={};
	int now=1,j=1;
	cin>>n>>k;
	for (int i=1; i<=n; i++) cin>>a[i];
	int c=0;
	for (long long i=k; i>0; i--) {
		b[now]=j;
		if (b[a[now]]!=0 && c==0) {
			i %= (b[now]-b[a[now]]+1);
          	c=1;
		}
      	if (i!=0) now=a[now];
		j++;
	}
	cout << now << endl;
	return 0;
}