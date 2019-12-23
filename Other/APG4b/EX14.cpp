#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int max_val = max(max(A,B),C);
  int min_val = min(min(A,B),C);
  cout << max_val - min_val << endl;
}
