#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int z=0;
    int x;
    while (n--) {
        cin >> x;
        z = __gcd(z,x);
    }
    cout << z;
}
