#include <iostream>
using namespace std;
int main() {
    int N;
    string S,T,X="";
    cin >> N >> S >> T;
    for (int i=0; i<N; i++) {
        X += S[i];
        X += T[i];
    }
    cout << X << endl;
    return 0;
}
