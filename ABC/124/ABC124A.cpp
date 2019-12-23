#include<iostream>
using namespace std;
int main() {
    int A,B,ans=0;
    cin >> A >> B;
    for (int i=0; i<2; i++) {
        if (A > B) ans += A--;
        else       ans += B--;
    }
    cout << ans << endl;
    return 0;
}
