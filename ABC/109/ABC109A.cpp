#include<iostream>
using namespace std;

int main(){
    int A,B,n;
    cin >> A >> B;

    for (int i=1; i<4; i++) {
        n = A * B * i;
        if (n % 2 == 1) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}