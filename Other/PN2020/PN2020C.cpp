#include<iostream>
#include<cmath>
using namespace std;
int main() {
	long double a,b,c;cin>>a>>b>>c;
	if (a+b+2.0*sqrt(a*b) < c) cout<<"Yes";
	else cout<<"No";
}
