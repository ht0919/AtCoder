#include <iostream>
using namespace std;
#define REP(i,n) for(int i=0;i<n;i++)
int main()
{
  int cnt=0;
  string s;

  cin >> s;
  REP(i, s.size())
    if (s.at(i) == '1') cnt++;
  cout << cnt << endl;
  return 0;
}
