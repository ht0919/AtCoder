#include <iostream>
using namespace std;

int main() {

    string S;
    cin >> S;

    if (S[0] == 'A') {
        int cnt = 0;
        for (int i=2; i<S.size()-1; i++) {
            if (S[i]=='C') {
                cnt++;
            }
        }
        if (cnt == 1) {
            bool flg = true;
            for (int i=0; i<S.size(); i++) {
                if (S[i]=='A' || S[i]=='C') {
                    ;
                } else {
                    if((S[i]>= 'A') && (S[i]<='Z'))
                        flg = false;
                }
            }
            if (flg) {
                cout << "AC" << endl;
                return 0;
            }
        }
    }
    cout << "WA" << endl;
    return 0;
}