#include<iostream>
using namespace std;
int main() {
    string S;
    cin >> S;
    char B=S[0];
    int L=S.length(), cnt=0;
    for (int i=1; i<L; i++) {
        if (B == S[i]) {
            cnt++;
            if (S[i]=='0') B='1';
            else B='0';
        } else {
            B = S[i];
        }
    }
    cout << cnt << endl;
    return 0;
}
