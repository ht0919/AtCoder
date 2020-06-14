#include <iostream>
using namespace std;
int main() {
    int X,Y; cin>>X>>Y;
    int turu, kame, flg;

    for (turu = 0; turu <= X; turu++) {
        kame = X - turu;
        flg = (X == kame + turu) && (Y == 2 * turu + 4 * kame);
        if (flg) break;
    }
    if (flg)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}