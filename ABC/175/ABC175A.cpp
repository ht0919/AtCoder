#include <iostream>
using namespace std;
int main() {
    int ans=0;
    string S; cin>>S;
    if (S=="RSS" || S=="SRS" || S=="SSR" || S=="RSR") ans=1;
    if (S=="RRS" || S=="SRR") ans=2;
    if (S=="RRR") ans=3;
    cout << ans << endl;
    return 0;
}