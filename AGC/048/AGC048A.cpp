#include <iostream>
using namespace std;
string s;
int calc(string &s) {
	string ss="atcoder";
	if (s>ss) return 0;
	for (int i=1; i<s.size(); i++) {
		if(s[i]>'t') return i-1;
		if(s[i]>'a') return i;
	}
	return -1;
}
int main() {
	int n;cin>>n;
	while(n--) {
		cin>>s;
		cout<<calc(s)<<endl;
	}
	return 0;
}