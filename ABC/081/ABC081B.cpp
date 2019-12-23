#include <iostream>
using namespace std;
#define REP(i,n) for(int i=0;i<n;i++)
int main()
{
  int N,cnt=0;
  cin >> N;
  long long int A[N];
  REP(i, N) cin >> A[i];

  while(true) {
    bool flag = false;
    REP(i, N)
      if (A[i]%2 == 1) {
        flag = true;
        break;
      }
    if (flag) break;
    REP(i, N)
      A[i] /= 2;
    cnt++;
  }

  cout << cnt << endl;
  return 0;
}
