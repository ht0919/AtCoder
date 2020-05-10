#include <iostream>
using namespace std;
main() {
  string S,T; cin>>S>>T;
  T.pop_back();
  cout<<(S==T?"Yes":"No")<<endl;
}
