#include<iostream>
using namespace std;
int main() {
    int r,D,x2000;
    cin >> r >> D >> x2000;
    for (int i=1; i<=10; i++) {
        int t = r * x2000 - D;
        cout << t << endl;
        x2000 = t;
    }
    return 0;
}
