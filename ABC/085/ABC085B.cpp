#include <iostream>
#include <set>
using namespace std;
#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
  int N;
  cin >> N;
  int A[N];
  REP(i, N) cin >> A[i];

  set<int> val;
  REP(i, N) val.insert(A[i]);
  cout << val.size() << endl;
  return 0;
}
