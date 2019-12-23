#include <iostream>
using namespace std;

int main() {
  int N,K;
  cin >> N >> K;
  cout << (((N-1)/(K-1))+((N-1)%(K-1)?1:0)) << endl;
  return 0;
}
