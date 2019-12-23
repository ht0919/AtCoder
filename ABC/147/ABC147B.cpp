#include <iostream>
using namespace std;
int main() {
    string S; cin >> S;
    int i1=0, i2=S.length()-1, cnt=0;
    for (int i=0; i<S.length()/2; i++) {
        if (S[i1]!=S[i2]) cnt++;
        i1++; i2--;
    }
    cout << cnt << endl;
    return 0;
}
