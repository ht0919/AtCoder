#include <iostream>
using namespace std;
int main() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int e = c - a, f = d - b;
	e = abs(e);
	f = abs(f);
	int q = min(e,f), w = max(e,f);
	if ( q==0 && w==0 )
	    cout<<0;
	else if( q==w || q+w<4 )
	    cout<<1;
	else if ( q+w<7 || q%2==w%2 || w-q<4 )
	    cout<<2;
	else
	    cout<<3;
	return 0;
}