#include <iostream>
using namespace std;
int main()
{
  int a,b;
  string s = "Odd";

  cin >> a >> b;
  if ((a*b)%2 == 0) s = "Even";
  cout << s << endl;
  return 0;
}
