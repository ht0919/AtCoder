#include<iostream>
using namespace std;
int a[200010];
int main() {
	int N,cnt=0;
	scanf("%d",&N);
	for (int i=1; i<=N; i++) scanf("%d", &a[i]);
	for (int i=N; i>=1; i--) {
		for (int j=i+i; j<=N; j+=i) {
			a[i] ^= a[j];
		}
		if ( a[i] ) cnt++;
	}
	printf("%d\n", cnt);
	for (int i=1; i<=N; i++) {
        if ( a[i] ) printf("%d ", i);
    }
	return 0;
}
