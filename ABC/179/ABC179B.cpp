#include <iostream>
using namespace std;
int main() {
  int N; cin>>N;
  int D1,D2,cnt=0;
  string ans="No";
  for (int i=0; i<N; i++) {
    cin>>D1>>D2;
    if (D1==D2) cnt++;
    else cnt=0;
    if (cnt==3) {
      ans="Yes";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}