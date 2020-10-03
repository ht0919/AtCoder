#include <iostream>
using namespace std;
int main() {
    int A,B,X,Y; cin>>A>>B;
    for (int i=-100; i<101; i++) {
        for (int j=-100; j<101; j++) {
            if (i+j==A && i-j==B) {
                cout<<i<<' '<<j<<endl;
                return 0;
            }            
        }
    }
}