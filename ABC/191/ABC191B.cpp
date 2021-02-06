#include <iostream>
using namespace std;
int A[100000];
int main() {
    int N,X; cin>>N>>X;
    int n,cnt=0;
    for (int i=0; i<N; i++) {
        cin>>n;
        if (n!=X) A[cnt++]=n;
    }
    for (int i=0; i<cnt; i++) {
        if (i>0) cout<<' ';
        cout<<A[i];
    }
    cout<<endl;
    return 0;
}