#include <iostream>
using namespace std;
int main() {
    int N;
    string S,T="";
    cin >> N >> S;
    char U=' ';
    for (int i=0; i<N; i++) {
        if (U != S[i]) {
            T += S[i];
            U = S[i];
        }
    }
    cout << T.length() << endl;
    return 0;
}
