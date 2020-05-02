#include <iostream>
using namespace std;
int main() {
  int K,A,B; cin>>K>>A>>B;
  for (int i=1; K*i<=1000; i++) {
    if (K*i>=A && K*i<=B) {
      cout<<"OK"<<endl;
      return 0;
    }
  }
  cout<<"NG"<<endl;
  return 0;
}