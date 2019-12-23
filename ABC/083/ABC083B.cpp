#include <iostream>
using namespace std;

int digits(int n)
{
    int m = 0;
    while (n > 0) {
      m += n % 10;
      n /= 10;
    }
    return m;
}

int main()
{
  int N,A,B,total=0;
  cin >> N >> A >> B;

  for (int i=1; i<=N; i++) {
    int sum = digits(i);
    if (sum >= A && sum <= B) total += i;
  }

  cout << total << endl;
  return 0;
}
