#include <iostream>
using namespace std;
int main() {
	int c=0;
	string s,x,pre;
	cin >> s;
	for (int i=0; i<s.length(); i++) {
		x += s[i];
		if (x != pre) {
			pre = x;
			x.clear();
			c++;
		}
	}
	cout << c;
}
