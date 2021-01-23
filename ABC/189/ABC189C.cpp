#include <iostream>
using namespace std;
#define For(i,l,r) for(int i=l;i<=r;i++)
#define MAXN 10001
int N,a[MAXN],ans;
int main() {
    cin>>N;
    For(i,1,N) cin>>a[i];
    For(i,1,N) {
        int mn=a[i];
        For(j,i,N) mn=min(mn,a[j]),ans=max(ans, mn*(j-i+1));
    }
    cout<<ans<<endl;
    return 0;
}