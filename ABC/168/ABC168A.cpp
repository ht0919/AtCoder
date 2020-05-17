#include <iostream>
#include <cstring>
using namespace std;
int main() {
  int N; cin>>N;
  char str[4];
  sprintf(str, "%d", N);
  int n = str[strlen(str) - 1] - '0';
  if (n==2||n==4||n==5||n==7||n==9) {
    cout<<"hon";
  } else if (n==0||n==1||n==6||n==8) {
    cout<<"pon";
  } else {
    cout<<"bon";
  }
  cout<<endl;
  return 0;
}