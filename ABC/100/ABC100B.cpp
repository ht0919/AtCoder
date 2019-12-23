#include <iostream>
#include <cmath>
using namespace std;

int func(int x) {
  if (x % 100 != 0) return 0;
  return func(x / 100) + 1;
}

int main() {
  int D,N;
  cin >> D >> N;

  int cnt=0;
  for (int i=1;;i++) {
    if (func(i)==D) {
      cnt++;
      if (cnt==N) {
        cout << i << endl;
        return 0;
      }
    }
  }
}
