#include <iostream>
#include <string>
using namespace std;

int compstr(string a, string b) {
  int cnt=0;
  for (char c='a'; c<='z'; c++) {
    bool flg_a=false, flg_b=false;
    for (int i=0; i<a.size(); i++) {
      if (c == a[i]) flg_a=true;
    }
    for (int i=0; i<b.size(); i++) {
      if (c == b[i]) flg_b=true;
    }
    if (flg_a && flg_b) cnt++;
  }
  return cnt;
}

int main() {
  int N,ans=0;
  string S;
  cin >> N >> S;

  for (int i=1; i<N; i++) {
    string a=S.substr(0,i);
    string b=S.substr(i,N-i);
    ans = max(ans,compstr(a,b));
  }

  cout << ans << endl;
  return 0;
}
