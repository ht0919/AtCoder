#include <iostream>
#include <algorithm>
using namespace std;

int main() {

  int A[3],ans=0;
  for (int i=0; i<3; i++)
    cin >> A[i];

  int len = sizeof(A) / sizeof(int);
  sort(A, A+len);

  ans  = abs(A[1]-A[2]);
  ans += abs(A[0]-A[1]);

  cout << ans << endl;
  return 0;
}