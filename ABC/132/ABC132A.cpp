#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    string S,A="No";
    cin >> S;
	char d[4];
	d[0]=S[0],d[1]=S[1],d[2]=S[2],d[3]=S[3];
	sort(d,d+4);
    if (d[0]==d[1] && d[2]==d[3] && d[0]!=d[2])
        A="Yes";
    cout << A << endl;
    return 0;
}
