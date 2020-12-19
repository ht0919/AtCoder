#include <iostream>
#include <string>
#include <sstream>
#include <set>
using namespace std;
string s;
set<int> st;
int main() {
  int N,cnt=0; cin>>N;
  for (int i=1; i<=N; i++) {
    s = to_string(i);
    if (s.find("7") != string::npos) {
      st.insert(i);
    }
    stringstream ss;
    ss << oct << i;
    s = ss.str();
    if (s.find("7") != string::npos) {
      st.insert(i);
    }
  }
  cout<<(N - st.size())<<endl;
  return 0;
}