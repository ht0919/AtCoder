#include <iostream>
using namespace std;

int main() {
  int N; cin >> N;

  int ans = N;
  for (int i=0; i<=N; i++) {
    int c = 0;
    int t = i;
    while (t>0) c += t % 6, t /= 6;
    t=N-i;
    while (t>0) c += t % 9, t /= 9;
    if (ans>c) ans = c;
  }
  cout << ans << endl;
  return 0;
}
