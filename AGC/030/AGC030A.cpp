#include <iostream>
using namespace std;
int main() {
    int A,B,C;
    cin >> A >> B >> C;
    if (A+B>=C) {
        cout << (B+C) << endl;
    } else {
        cout << (A+B*2+1) << endl;
    }
    return 0;
}
