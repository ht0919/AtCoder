#include <iostream>
#include <string>
using namespace std;

int main() {
    string S,T;
    cin >> S >> T;

    for (int i=0; i<S.length(); i++) {
        if (S[i] == T[i]) {
            continue;
        } else {
            char c1 = S[i];
            char c2 = T[i];
            for (int j=0; j<S.length(); j++) {
                if (S[j] == c1) {
                    S[j] = c2;
                } else if (S[j] == c2) {
                    S[j] = c1;
                }
            }
        }
    }
    if (S == T)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}