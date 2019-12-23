#include <iostream>
using namespace std;
int main() {
    int N; string S; cin >> N >> S;
    for (int i=0; i<S.length(); i++) {
        if (S[i]+N > 'Z')
            cout << (char)(S[i]+N-26);
        else
            cout << (char)(S[i]+N);
    }
    cout << endl;
    return 0;
}
