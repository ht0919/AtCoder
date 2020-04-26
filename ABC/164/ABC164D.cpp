#include <iostream>
using namespace std;
string S;
long cnt[2019];
int main() {
  cin>>S;
  int now=0;
  long ans=0,p=1,pi=1;
  cnt[0]=1;
  for (int i=S.size();i--;) {
    now = (now+(S[i]-'0')*p) % 2019;
    ans += cnt[now]++;
    p = p * 10%2019;
  }
  cout<<ans<<endl;
  return 0;
}