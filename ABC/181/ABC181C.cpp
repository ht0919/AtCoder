#include <iostream>
using namespace std;
long long x[111],y[111];
int main() {
	int N;cin>>N;
	for (int i=1; i<=N; i++) {
		cin>>x[i]>>y[i];
		for (int j=1;j<i;j++) {
            for (int k=1;k<j;k++) {
                if ( (x[i]-x[j])*(y[i]-y[k]) == (x[i]-x[k])*(y[i]-y[j]) ) {
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
	}	
	cout<<"No"<<endl;
	return 0;
}