#include <iostream>
using namespace std;
int main() {
	int N,X; cin>>N>>X;
	X *= 100;
	for (int i=0; i<N; i++) {
		int V,P; cin>>V>>P;
		X -= V * P;
		if (X<0) {
			cout<<i+1<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	return 0;
}