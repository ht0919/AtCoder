#include <iostream>
#include <map>
using namespace std;
int main() {
	map<string,int>a;
	int n;
	cin >> n;
	int mx=0;
	for (int i=1; i<=n; i++) {
		string t;
		cin >> t;
		a[t]++;
		mx = max(mx, a[t]);
	}
	for (auto i:a) {
		if (i.second == mx) {
			cout << i.first << endl;
		}
	}
}