#include <iostream>
using namespace std;
int main() {
  int N, A;
  cin >> N >> A;

  // ここにプログラムを追記
  for (int i=0; i<N; i++) {
    string op;
    int n;
    cin >> op >> n;
    if (op == "+") A += n;
    else if (op == "-") A -= n;
    else if (op == "*") A *= n;
    else if (op == "/") {
      if (n == 0) {
        cout << "error" << endl;
        break;
      } else {
        A /= n;
      }
    }
    cout << i+1 << ":" << A << endl;
  }
}
