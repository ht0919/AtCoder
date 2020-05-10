#include <iostream>
using namespace std;
int a,b,c,k;
int main() {
	int A,B,C,K; cin>>A>>B>>C>>K;
	cout << max(min(K,A),0) - max(K-A-B,0) << endl;
	return 0;
}
