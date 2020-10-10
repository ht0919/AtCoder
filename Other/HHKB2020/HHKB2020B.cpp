#include <iostream>
using namespace std;
int main() {
    int H,W; cin>>H>>W;
    string S[H];
    for (int i=0; i<H; i++) cin>>S[i];
    int cnt=0;
    for (int i=0; i<H; i++) {
        for (int j=0; j<W-1; j++) {
            if (S[i][j]=='.' && S[i][j+1]=='.') cnt++;
        } 
    }
    for (int j=0; j<W; j++) {
        for (int i=0; i<H-1; i++) {
            if (S[i][j]=='.' && S[i+1][j]=='.') cnt++;
        } 
    }
    cout<<cnt<<endl;
}