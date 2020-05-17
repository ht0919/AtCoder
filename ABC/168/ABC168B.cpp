#include <iostream>
#include <string>
using namespace std;
int main() {
  int K; string S,A; cin>>K>>S;
  A=S.substr(0, K);
  if (S.size()>K) A+="...";
  cout<<A<<endl;
  return 0;
}