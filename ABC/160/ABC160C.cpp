#include<iostream>
using namespace std;
int main(){
  int N,K; cin>>K>>N;
  int A[N];
  for (int i=0;i<N;i++) cin>>A[i];
  int M = A[N-1]-A[0];
  for (int i=1; i<N; i++) {
    M = min(M, K-A[i]+A[i-1]);
  }
  cout<<M<<endl;
  return 0;
}