#include <iostream>
#include <set>
using namespace std;
int main() {
  int N; cin>>N;
  set<string> S;
  for (int i=0; i<N; i++) {
    string tmp; cin>>tmp;
    S.insert(tmp);
  }
  cout << S.size() << endl;
  return 0;
}