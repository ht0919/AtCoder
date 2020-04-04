#include<iostream>
using namespace std;
int main() {
    int N,M; cin>>N>>M;
    int A[N],sum=0,cnt=0;
    for (int i=0; i<N; i++) {
        cin>>A[i];
        sum+=A[i];
    }
    double T = sum / 4.0 / M;
    for (int i=0; i<N; i++) {
        if (A[i]>=T) cnt++;
    }
    if (cnt>=M) cout<<"Yes"<<endl;
    else        cout<<"No"<<endl;
    return 0;
}