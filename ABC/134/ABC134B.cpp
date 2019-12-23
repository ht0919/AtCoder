#include<iostream>
using namespace std;
int main() {
    int N,D,x,a;
    cin >> N >> D;
    x = D+1+D;
    if (N%x == 0) a = N/x;
    else a = N/x+1;
    cout << a << endl;
    return 0;
}
