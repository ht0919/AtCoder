#include <iostream>
using namespace std;
int conbi(int n, int r){
  int num = 1;
  for(int i = 1; i <= r; i++){
    num = num * (n - i + 1) / i;
  }
  return num;
}
int main() {
  int M,N; cin>>M>>N;
  int n = conbi(M,2);
  n += conbi(N,2);
  cout<<n<<endl;
  return 0;
}
