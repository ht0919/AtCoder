#include <iostream>
using namespace std;

int main() {

  string S,T;
  cin >> S >> T;

  for (int i=0; i<S.size(); i++) {
    if (S == T) {
      cout << "Yes" << endl;
      return 0;
    }

    int len = S.size();
    char c = S[len-1];
    for(int i = len - 1; i > 0; --i) {
        S[i] = S[i-1];
    }
    S[0] = c;

  }
  cout << "No" << endl;
  return 0;
}