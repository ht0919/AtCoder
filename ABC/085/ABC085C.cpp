#include <iostream>
using namespace std;

int main()
{
  int N,Y;
  cin >> N >> Y;

  int m10=-1, m05=-1, m01=-1;
  for (int a=0; a<=N; a++) {
    for (int b=0; b+a<=N; b++) {
      int c = N - a - b;
      int sum = 10000*a + 5000*b + 1000*c;
      if (sum == Y) {
        m10 = a; m05 = b; m01 = c;
      }
    }
  }

  cout << m10 << " " << m05 << " " << m01 << endl;
  return 0;
}
