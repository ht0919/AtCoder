#include <iostream>
using namespace std;
int main() {
  string S;
  cin >> S;

  int n = 1;
  for (int i=1; i<S.size(); i+=2) {
    if (S.at(i) == '+') n++;
    else n--;
  }

  cout << n << endl;
}
