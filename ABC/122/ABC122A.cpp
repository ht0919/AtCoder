#include<iostream>
using namespace std;
int main() {
    char b,a;
    cin >> b;
    if (b == 'A') a='T';
    if (b == 'T') a='A';
    if (b == 'C') a='G';
    if (b == 'G') a='C';
    cout << a << endl;
    return 0;
}
