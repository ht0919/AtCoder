#include <iostream>
using namespace std;

int main() {
  int n;
	cin >> n;
  int a[n], sum=0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		while (a[i] % 2 == 0) { a[i] /= 2; sum++; }
	}
	cout << sum << endl;
	return 0;
}
