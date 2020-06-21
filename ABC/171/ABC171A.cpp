#include <iostream>
using namespace std;
int main() {
    char a; cin>>a;
    if (a < 0x5b) {
        cout << "A" << endl;
    } else {
        cout << "a" << endl;        
    }
    return 0;
}