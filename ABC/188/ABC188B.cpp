#include <iostream>
using namespace std;
int main() {
    int N; cin>>N;
    int A[N],B[N];
    for (int i=0; i<N; i++) cin>>A[i];
    for (int i=0; i<N; i++) cin>>B[i];
    int sum=0;
    for (int i=0; i<N; i++) {
        sum += A[i] * B[i];
    }
    string ans="No";
    if (sum == 0) ans="Yes";
    cout<<ans<<endl;
    return 0;
}