#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
    double res=0;
    double x[10],y[10];
	cin >> n;
	for(int i=0; i<n; i++)
        cin >> x[i] >> y[i];
	for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            res += sqrt( (x[i]-x[j]) * (x[i]-x[j]) + (y[i]-y[j]) * (y[i]-y[j]) );
	res = res / ((double)(n)*0.5);
	cout << fixed << res << endl;
}
