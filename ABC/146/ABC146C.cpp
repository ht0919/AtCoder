#include <iostream>
using namespace std;
int main() {
  int64_t a,b,x;
  cin >> a >> b >> x;
  int l=0, r=1e9+1;
  while (r-l != 1) {
    int n = (l+r) / 2;
    if (a*n+b*to_string(n).size()>x) r=n;
    else l=n;
  }
  cout << l << endl;
}