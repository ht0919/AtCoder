#include <iostream>
using namespace std;
int main() {
  int n; cin>>n;
  int p=1000000007;
  int64_t a=1,b=1,c=1;
  for (int i=0; i<n; i++) {
    a = a * 10 % p;
    b = b *  9 % p;
    c = c *  8 % p;
  }
  cout << (a - b * 2 + c + p * 2) % p << endl;
  return 0;
}