#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string sample[] = {"dream","dreamer","erase","eraser"};
  string S;
  cin >> S;

  reverse(S.begin(), S.end());
  for (int i=0; i<4; i++)
    reverse(sample[i].begin(), sample[i].end());

  bool flg = true;
  for (int i=0; i<S.size();) {
    bool flg2 = false;
    for (int j=0; j<4; j++) {
      string t = sample[j];
      if (S.substr(i, t.size()) == t) {
        flg2 = true;
        i += t.size();
      }
    }
    if (!flg2) {
      flg = false;
      break;
    }
  }

  if (flg) cout << "YES" << endl;
  else     cout << "NO" << endl;
  return 0;
}
