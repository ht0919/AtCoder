#include <iostream>
using namespace std;
int main() {
    string S,T; cin>>S>>T;
    int n=0;
    for (int i=0; i<S.size(); i++) {
        if (S[i] != T[i]) n++;
    }
    cout << n << endl;
    return 0;
}