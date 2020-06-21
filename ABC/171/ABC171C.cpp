#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  long long n; cin >> n;
  while (n--) {
    s = (char)('a' + (int)(n % 26)) + s;
    n /= 26;
  }
  cout << s;
  return 0;
}