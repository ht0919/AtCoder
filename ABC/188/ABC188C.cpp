#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n; cin>>n;
    long v=pow(2,n-1), a=0, b=0, c=0, d=0;
    for (long i=0; i<v; i++) {
        long s; cin>>s;
        if (a<s) {
            a=s; c=i;
        }
    }
    for (long i=0; i<v; i++) {
        long s; cin>>s;
        if( b < s ) {
            b=s; d=i;
        }
    }
    d += v;
    if ( a < b ) cout<< c+1 <<endl;
    else         cout<< d+1 <<endl;
}