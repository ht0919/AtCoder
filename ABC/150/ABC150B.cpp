#include <iostream>
using namespace std;
int main() {
    int N,cnt=0;
    string S;
    cin >> N >> S;
    for (int i=0; i<N-2; i++) {
        if (S[i]=='A'&&S[i+1]=='B'&&S[i+2]=='C') cnt++;
    }
    cout << cnt << endl;
    return 0;
}
