#include<iostream>
using namespace std;
int A[2*100000+1];
int main() {
    int N,M; cin>>N;
    for (int i=1; i<N; i++) {
        cin>>M;
        A[M-1]++;
    }
    for (int i=0; i<N; i++) {
        cout<<A[i]<<endl;
    }
    return 0;
}