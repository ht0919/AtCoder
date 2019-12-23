#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n,x;
	cin >> n;
	for(int i=1; i<=sqrt(n); i++)
		if(n%i == 0)
			x = i;
	cout << x-1+n/x-1 << endl;
    return 0;
}