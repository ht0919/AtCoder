#include<iostream>
using namespace std;
int main() {
    int A,B,C,ans;
    cin >> A >> B >> C;
    ans = B / A;
    if (ans > C) ans = C;
    cout << ans << endl;
    return 0;
}
