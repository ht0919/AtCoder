#include <iostream>
using namespace std;
int n,mx,c,x,ls;
int main() {
	cin >> n;
	for(int i=1; i<=n; i++) {
		scanf("%d", &x);
		if(x <= ls) c++;
		else c = 1;
		ls = x;
		mx = max(mx,c);
	}
	cout << mx-1 << endl;
    return 0;
}