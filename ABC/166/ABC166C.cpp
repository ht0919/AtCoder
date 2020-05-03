#include <iostream>
#include <vector>
using namespace std;
int N,M,H[100001],A,B,cnt;
int main() {
    cin>>N>>M;
    for (int i=1; i<=N; i++) cin>>H[i];
    vector<vector<int>> data(N+1);
    for (int i=1; i<=M; i++) {
        cin>>A>>B;
        data.at(A).push_back(B);
        data.at(B).push_back(A);
    }

    for (int i=1; i<=N; i++) {
        bool f=true;
        for (int j=0; j<data.at(i).size(); j++) {
            if ( H[i] <= H[data.at(i).at(j)] ) {
                f=false;break;
            }
        }
        if (f) cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}