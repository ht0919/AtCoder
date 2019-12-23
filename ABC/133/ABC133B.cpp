#include<iostream>
#include<cmath>
using namespace std;
int A[11][11];
int main() {
	int a,b,i,j,k,w,m=0,t;
	cin >> a >> b;
	for(i=1; i<=a; i++)
        for(j=1; j<=b; j++)
            cin >> A[i][j];

	for(i=1; i<a; i++) {
        for(j=i+1; j<=a; j++) {
			w = 0;
			for(k=1; k<=b; k++) {
                w += (A[i][k]-A[j][k]) * (A[i][k]-A[j][k]);
            }
			t = sqrt(w);
			if(t*t == w) m++;
		}
    }
	cout << m;
}