#include<iostream>
#include<algorithm>
using namespace std;
long long int A,B,C,D,t;
int main() {
    cin >> A >> B >> C >> D;
	t = __gcd(C,D);
    t = C * D / t;
	cout << B-A+1-(B/C-(A-1) / C+B / D-(A-1) / D-B / t+(A-1) / t) << endl;
    return 0;
}
