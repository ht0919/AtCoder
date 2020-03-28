#include<iostream>
using namespace std;
int main() {
  int X; cin>>X;
  if (X==0) {
    cout << 0 << endl;
  } else {
    int ans1 = X / 500;
    int per = X % 500;
    int ans2 = per / 5;
    cout << (ans1*1000+ans2*5) << endl;
  }
  return 0;
}