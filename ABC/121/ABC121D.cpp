#include<iostream>
using namespace std;
int main() {
	long long A,B;
	cin >> A >> B;
	long long a=4-A%4, b=B%4, n=0;
	for(long long i=A;   i<A+a; i++) n=n^i;
	for(long long i=B-b; i<=B;  i++) n=n^i;
	cout << n << endl;
	return 0;
}
