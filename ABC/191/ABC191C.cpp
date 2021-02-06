#include <iostream>
#include <vector>
using namespace std;
int main() {
    int H,W; cin>>H>>W;
    vector<string> S(H);
    for(auto& s:S) cin>>s;
    int ans=0;
    for( int i=0; i<(H-1); i++)
        for( int j=0; j<W-1; j++)
            if( S[i][j] ^ S[i][j+1] ^ S[i+1][j] ^ S[i+1][j+1] ) ans++;
    cout<<ans<<endl;
}