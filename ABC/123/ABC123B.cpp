#include <bits/stdc++.h>
using namespace std;
int a,ans,maxx=0;
int main() {
	for (int i=1; i<=5; i++) {
		cin >> a;
        int k = (ceil(a*1.0/10))*10;
        ans += k;
		if ( k-a > maxx ) maxx = k-a;
	}
	cout << ans-maxx << endl;
}