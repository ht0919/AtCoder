#include <iostream>
using namespace std;
int main() {
    int X,Y; cin>>X>>Y;
    string ans="No";
    if (X > Y) {
        if (Y+3 > X) ans = "Yes";
    } else {
        if (X+3 > Y) ans = "Yes";
    }
    cout<<ans<<endl;
    return 0;
}