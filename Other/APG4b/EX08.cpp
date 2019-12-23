#include <iostream>
using namespace std;
int main() {
  int p,price,N;

  cin >> p;

  if (p == 1) { // パターン1
    cin >> price;
    cin >> N;
    cout << price * N << endl;
  } else if (p == 2) {  // パターン2
    string text;
    cin >> text >> price;
    cin >> N;
    cout << text << "!" << endl;
    cout << price * N << endl;
  }
}
