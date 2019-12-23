#include <iostream>
using namespace std;
int main() {
    int A,B,C,D;
    cin >> A >> B >> C;
    D = A - B;
    C = C - D;
    if (C > 0)
        cout << C << endl;
    else
        cout << 0 << endl;
    return 0;
}
