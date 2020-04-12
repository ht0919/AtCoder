#include <iostream>
using namespace std;
int main() {
	int N; string S; cin>>N>>S; 
	long long r=0, g=0, b=0;
	for (int i=0; i<N; i++) {
		if (S.at(i)=='R') r++;
		if (S.at(i)=='G') g++;
		if (S.at(i)=='B') b++;
	}
	long long ans=r*g*b;
	for (int i=0; i<N; i++) {
		for (int j=1; (i-j>=0 && i+j < N); j++) {
			if (S.at(i)!=S.at(i-j) && S.at(i)!=S.at(i+j) && S.at(i-j)!=S.at(i+j))
                ans--;
		}
	}
	cout<<ans<<endl;
}