#include <iostream>
using namespace std;
bool kaibun(string s) {
  int len=s.length();
  int center=len/2+1;
  for (int i=0,j=len-1; i<center; i++,j--) {
    if (s[i]!=s[j]) {
      return false;
    }
  }
  return true;
}
int main() {
  string S; cin>>S;
  if(!kaibun(S)) {
    cout<<"No"<<endl;
    return 0;
  }
  int N=S.length();
  string S1="";
  for (int i=0; i<(N-1)/2; i++) S1+=S[i];
  if(!kaibun(S1)) {
    cout<<"No"<<endl;
    return 0;
  }
  string S2="";
  for (int i=(N+3)/2-1; i<N; i++) S2+=S[i];
  if(!kaibun(S2)) {
    cout<<"No"<<endl;
    return 0;
  }
  cout<<"Yes"<<endl;
  return 0;
}
