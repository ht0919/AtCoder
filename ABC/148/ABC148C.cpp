#include <iostream>
using namespace std;
int main() {
    long A,B,X,R,tmp;
    cin >> A >> B;
    X = A * B;
    if(A<B){
        tmp = A;
        A = B;
        B = tmp;
    }
    R = A % B;
    while(R!=0){
        A = B;
        B = R;
        R = A % B;
    }
    cout << X/B << endl;
    return 0;
}
