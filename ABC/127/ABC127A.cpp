#include<iostream>
using namespace std;
int main() {
    int A,B,c=0;
    cin >> A >> B;
    if (A >= 13) {
        c = B;
    } else if(A >= 6 && A <= 12) {
        c = B / 2;
    } else if(A <= 5) {
        c = 0;
    }
    cout << c << endl;
    return 0;
}
