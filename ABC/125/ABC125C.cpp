#include<iostream>
#include<algorithm>
using namespace std;
int g(int a, int b) {
    return b?g(b,a%b):a;
}
int N;
long long A[1<<17],L[1<<17],R[1<<17];
int main() {
    cin >> N;
    for(int i=0; i<N; i++) cin >> A[i];
    for(int i=0; i<N; i++) L[i+1]=g(L[i  ],A[i]);
    for(int i=N; i--; )    R[i  ]=g(R[i+1],A[i]);
    int ans=0;
    for(int i=0; i<N; i++) ans=max(ans,g(L[i],R[i+1]));
    cout << ans << endl;
    return 0;
}
