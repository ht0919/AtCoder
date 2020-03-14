#include<iostream>
using namespace std;
int main() {
    long long int x,H,W;cin>>H>>W;
    if (W==1 || H==1) {
        x = 1;
    } else if (W%2==0 && H%2==0) {
        x = W/2*H;
    } else if (W%2==1 && H%2==0) {
        x = (W/2)*(H/2) + (W/2+1)*(H/2);
    } else if (W%2==1 && H%2==1) {
        x = (W/2)*(H/2) + (W/2+1)*(H/2+1);
    } else { // (W%2==0 && H%2==1)
        x = W/2*H;
    }
    cout << x << endl;
    return 0;
}