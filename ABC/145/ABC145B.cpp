#include <iostream>
using namespace std;
int main() {
    int N;
    string S;
    cin >> N >> S;
    int l = S.size();
    if (l%2 == 1) {
        cout << "No" << endl;
    } else {
        l /= 2;
        string T1 = S.substr(0,l);
        string T2 = S.substr(l,l);
        if (T1 == T2) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
