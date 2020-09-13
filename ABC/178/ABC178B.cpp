#include<iostream>
using namespace std;
long long a,b,c,d;
int main() {
	cin>>a>>b>>c>>d;
	cout<<max(a*c,max(a*d,max(b*c,b*d)));
}