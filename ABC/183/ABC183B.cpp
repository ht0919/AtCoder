#include <iostream>
using namespace std;
int main() {
    double Sx,Sy,Gx,Gy; cin>>Sx>>Sy>>Gx>>Gy;
    printf("%.10f\n",(Sx*Gy+Gx*Sy)/(Sy+Gy));
    return 0;
}