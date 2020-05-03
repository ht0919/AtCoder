#include <iostream>
using namespace std;
int N,K,d[100],cnt,t1,t2;
int main() {
    cin>>N>>K;
    for (int i=0; i<K; i++) {
        cin>>t1;
        for (int j=0; j<t1; j++) {
            cin>>t2; d[t2-1]++;
        }
    }
    for (int i=0; i<N; i++) if (d[i]==0) cnt++;
    cout<<cnt<<endl;
    return 0;
}