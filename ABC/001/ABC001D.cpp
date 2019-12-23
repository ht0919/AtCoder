#include <iostream>
#include <cstdio>
using namespace std;
const int BLOCK = 24*12;

int main()
{
  bool rain[BLOCK]={false};
  int n;
  cin >> n;

  while (n--) {
    string s;
    cin >> s;
    int from = (s[0]-'0')*600 + (s[1]-'0')*60 + (s[2]-'0')*10 + (s[3]-'0');
    int to   = (s[5]-'0')*600 + (s[6]-'0')*60 + (s[7]-'0')*10 + (s[8]-'0');
    int fi = from/5;
    int ti = (to+4)/5;
    for (int i=fi; i<ti; i++) rain[i]=true;
  }
  int i=0;
  while (i<BLOCK) {
    while (!rain[i] && i<BLOCK) i++;
    if (i==BLOCK) break;
    int fd = i;
    while (rain[i]) i++;
    int td = i;
    printf("%02d%02d-%02d%02d\n", fd/12, (fd%12)*5, td/12, (td%12)*5);
  }
  return 0;
}
