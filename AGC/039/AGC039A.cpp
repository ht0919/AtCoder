#include <iostream>
using namespace std;
int main() {
	string S, u;
	int K;
	cin >> S >> K;
	long long int d[3] = {};
	for (int j = 0; j < 3; j++) {
		auto t = u += S;
		for (int i = 1; i < t.length(); i++)
			if (t[i - 1] == t[i]) {
				t[i] = '!';
				d[j]++;
			}
	}
	if (K < 2) {
		cout << d[0] << endl;
	} else {
		cout << (K % 2 ? d[2] : d[1]) + (d[2] - d[0])*(K / 2 - 1) << endl;
	}
	return 0;
}
