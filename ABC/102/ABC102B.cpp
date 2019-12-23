#include <iostream>
#include <algorithm>
using namespace std;

int main() {

  int N;
  cin >> N;
  int A[N];
  for (int i=0; i<N; i++) {
    cin >> A[i];
  }

  int len = sizeof(A) / sizeof(int);
  sort(A, A+len);
  cout << A[N-1]-A[0] << endl;

  return 0;
}
