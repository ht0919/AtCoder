#include<iostream>
using namespace std;
int main() {
  int64_t N,K,Z=0,Q=1000000007;
  cin>>N>>K;
  for (int i=K; i<=N+1; i++) {
    Z = (Z + i * (N+1-i) + 1) % Q;
  }
  cout<<Z<<endl;
}