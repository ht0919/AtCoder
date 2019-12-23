#include <iostream>
using namespace std;
int main() {
    string S;
    cin >> S;
    bool flg = true;
    for (int i=0; i<S.length(); i++) {
        if (i % 2 == 0) {
            if (S[i] != 'R' && S[i] != 'U' && S[i] != 'D') {
               flg = false;
               break;
            }
        } else {
            if (S[i] != 'L' && S[i] != 'U' && S[i] != 'D') {
               flg = false;
               break;
            }
        }
    }
    if (flg) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
