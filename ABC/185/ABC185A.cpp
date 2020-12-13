#include <iostream>
using namespace std;
int main() {
  int A,ans=100;
  for (int i=0; i<4; i++) {
    cin>>A;
    ans=min(ans,A);
  }
  cout<<ans<<endl;
  return 0;
}