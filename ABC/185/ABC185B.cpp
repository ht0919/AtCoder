#include <iostream>
using namespace std;
int main() {
  int N,M,T,A,B; cin>>N>>M>>T;
  int time=0, batt=N;

  for (int i=0; i<M; i++) {
    cin>>A>>B;
    batt = batt - (A-time);
    if (batt <= 0) {
      cout<<"No"<<endl;
      return 0;
    }
    batt = min(N, batt+(B-A));
    time = B;
  }
  batt = batt - (T-time);
  if (batt <= 0) cout<<"No" <<endl;
  else           cout<<"Yes"<<endl;
  return 0;
}