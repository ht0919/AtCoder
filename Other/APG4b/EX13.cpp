#include <iostream>
#include <vector>
using namespace std;
int main() {
  int N,sum=0;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
   cin >> A.at(i);
   sum += A.at(i);
  }

  int ave = sum / N;
  for (int i = 0; i < N; i++) {
   cout << abs(A.at(i)-ave) << endl;
  }
}
