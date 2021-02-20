#include <bits/stdc++.h>
using namespace std;
int main() {
    string S,A="Yes"; cin>>S;
    for (int i=0; i<S.length(); i++) {
        if (i%2==0 && isupper(S[i]) || i%2==1 && islower(S[i])) {
            A="No";
            break;
        }
    }
    cout<<A<<endl;
    return 0;
}