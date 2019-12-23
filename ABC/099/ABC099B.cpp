#include <iostream>
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;

  int n = b - a;
  int sum = (1 + n) * n / 2;

  cout << (sum - b) << endl;
  return 0;
}
