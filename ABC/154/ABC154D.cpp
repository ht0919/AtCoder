#include <iostream>
using namespace std;
int N,K,sum=0,a[200004],d[200004];
int main() {
	cin >> N >> K;
	for (int i=1; i<=N; i++) {
        cin >> a[i];
        d[i] = d[i-1] + a[i];
    }
	for (int i=K; i<=N; i++) {
        sum = max(sum, d[i]-d[i-K]);
    }
	printf("%.12lf\n", (double)(sum+K) / 2.0);
}