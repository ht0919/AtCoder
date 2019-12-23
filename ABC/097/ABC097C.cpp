#include <iostream>
#include <set>
using namespace std;

int main() {
  string s;
  int K;
  cin >> s >> K;

  set<string> strs;
  for (char c='a'; c<='z'; c++) {
    for (int pos=0; pos<s.length(); pos++) {
      pos = s.find(c, pos);
      if (pos < 0) break;
      int len = min((int)s.length()-pos, 5);
      for (int i=1; i<=len; i++) {
        strs.insert(s.substr(pos, i));
      }
    }

    if (strs.size() >= K) {
      set<string>::iterator it = strs.begin();
      for (int i=0; i<K-1; i++) {
        it++;
      }
      cout << *it << endl;
      break;
    }
  }
  return 0;
}
