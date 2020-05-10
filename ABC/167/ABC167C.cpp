#include <iostream>
using namespace std;
int C[12],A[12][12];
int main() {
	int N,M,X; cin>>N>>M>>X;
	for (int i=0; i<N; i++) {
		cin>>C[i];
		for (int j=0; j<M; j++) cin>>A[i][j];
	}
	int ans=1e8;
	for (int i=0; i<1<<N; i++) {
		int now[12]={};
		int sum=0;
		for (int j=0; j<N; j++) {
     		if (i>>j&1) {
				sum+=C[j];
				for (int k=0; k<M; k++) now[k] += A[j][k];
			}
    	}
		bool flag=true;
		for (int j=0; j<M; j++) if (now[j]<X) flag=false;
		if (flag&&ans > sum) ans=sum;
	}
	cout<<(ans>1e7?-1:ans)<<endl;
	return 0;
}