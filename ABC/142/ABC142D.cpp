#include <iostream>
#include <algorithm>
using namespace std;
long long int a, b, c, tot;
int main(){
	cin >> a >> b;
	c = __gcd(a, b);
	for (long long int i=2; i*i <= c; i++) {
		if (c%i == 0) {
			tot++;
			while (c % i == 0) c /= i;
		}
	}
	if(c != 1) tot++; 
	cout << tot+1 << endl;
    return 0;
}
