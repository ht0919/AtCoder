#include <iostream>
using namespace std;
int main() {
  int x, a, b, n;
  cin >> x >> a >> b;

  // 1.の出力
  x++;
  n = x;
  cout << n << endl;
  // 2.の出力
  n *= (a + b);
  cout << n << endl;
  // 3.の出力
  n *= n;
  cout << n << endl;
  // 4.の出力
  n -= 1;
  cout << n << endl;
}
