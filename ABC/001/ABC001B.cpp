#include <iostream>
using namespace std;

int main()
{
  int m,vv=0;
  cin >> m;

  if (m < 100) vv=0;
  else if (m >= 100 && m <= 5000) vv = ((double)m/1000)*10;
  else if (m >= 6000 && m <= 30000) vv = ((double)m/1000)+50;
  else if (m >= 35000 && m <= 70000) vv = (((double)m/1000)-30)/5+80;
  else if (m > 70000) vv = 89;

  printf("%02d\n",vv);
  return 0;
}
