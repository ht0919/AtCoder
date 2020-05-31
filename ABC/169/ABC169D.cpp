#include <cstdio>
using namespace std;
int main() {
	long long n=0;scanf("%lld",&n);
	long long ans=0;
	for (int i=2; i<=1000000; i++) {
		int cnt=0;while(n%i==0){cnt++;n/=i;}
		int x=0;while((x+1)*(x+2)/2<=cnt)x++;
		ans += x;
	}
	if (n>1) ans++;
    printf("%lld",ans);
}