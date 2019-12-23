#include <iostream>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

int main() {
  int N[3],K;
  cin >> N[0] >> N[1] >> N[2] >> K;
  sort(N,N+3);
  REP(i,K) N[2]*=2;
  cout << N[0]+N[1]+N[2] << endl;
  return 0;
}
