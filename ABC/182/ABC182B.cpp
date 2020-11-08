#include <iostream>
using namespace std;
int N,A[100];
int main() {
	cin>>N;
	for (int i=0; i<N; i++) cin>>A[i];
	int ans,ac=0;
	for (int k=2; k<=1000; k++) {
		int cnt=0;
		for (int i=0; i<N; i++) if (A[i]%k==0) cnt++;
		if (ac<cnt) {
			ans=k;
			ac=cnt;
		}
	}
	cout<<ans<<endl;
}