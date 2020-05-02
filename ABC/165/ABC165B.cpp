#include <iostream>
using namespace std;
int main() {
  long long int X; cin>>X;
  int year;
  double rate=1.01;
  long long int money=100;
  for(year=0; money<X; year++){
    money *= rate;
  }
  cout<<year<<endl;
  return 0;
}