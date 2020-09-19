#include <iostream>
using namespace std;
int main() {
	int N,ans=0; cin>>N;
	for (int i=1; i<N; i++)
		ans += (N-1)/i;
	cout<<ans<<endl;
  return 0;
}
