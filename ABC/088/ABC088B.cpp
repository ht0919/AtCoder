#include <iostream>
using namespace std;
#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
  int N;
  cin >> N;
  int A[N];
  REP(i, N) cin >> A[i];
  sort(A, A+N, greater<int>());

  int Alice=0, Bob=0;
  REP(i, N)
    if (i % 2 == 0)
      Alice += A[i];
    else
      Bob += A[i];

  cout << Alice - Bob << endl;
  return 0;
}
