#include <iostream>
using namespace std;
#define rep(i,n) for(int i=2; i<=n; i++) 
int n, p[101], d[101];

int main() {
	cin >> n;
	rep(i,n) {
		int k = i;
		rep(j,n) {
			while(k % j == 0) {
				k /= j;
				p[j]++;
			}
		}
	}
	rep(i,n) rep(j,n) if(p[j] >= i-1) d[i]++;
	cout << d[75] + d[25] * (d[3] - 1) + d[15] * (d[5] - 1) + d[5] * (d[5] - 1) / 2 * (d[3] - 2) << endl;
	return 0;
}