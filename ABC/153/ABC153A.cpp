#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int H,A;
    cin >> H >> A;
    int ans = ceil(H / (double)A);
    cout << ans << endl;
    return 0;
}