#include <iostream>
using namespace std;
int main() {
    int A,B;
    cin >> A >> B;

    int n = A - B*2;
    if (n < 0) n = 0;
    cout << n << endl;
    return 0;
}
