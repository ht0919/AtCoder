#include <iostream>
using namespace std;
#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
  int N;
  cin >> N;
  int t[N+1],x[N+1],y[N+1];
  t[0]=x[0]=y[0]=0;
  REP(i, N)
    cin >> t[i+1] >> x[i+1] >> y[i+1];

  bool flg = true;
  REP(i, N)
  {
    int dt = t[i+1] - t[i];
    int dist = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
    if (dt < dist) flg = false;
    if (dist % 2 != dt % 2) flg = false;
  }

  if (flg) cout << "Yes" << endl;
  else     cout << "No" << endl;
  return 0;
}
