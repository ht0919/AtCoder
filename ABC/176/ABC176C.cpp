#include <iostream>
using namespace std;
int main() {
  int N; cin>>N;
  long long ans=0;
  int before, tmp, step;
  cin>>before;
  for (int i=1; i<N; i++) {
    cin>>tmp;
    if (before>tmp) {
      step = before - tmp;
      ans += step;
      before = tmp + step;
    } else {
      before = tmp;
    }
  }
  cout << ans << endl;
  return 0;
}