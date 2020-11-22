#include <iostream>
using namespace std;
int main() {
    int N,X; string S;
    cin>>N>>X>>S;
    for (int i=0; i<N; i++) {
        if (S[i]=='o') X++;
        else if (X>0) X--;
    }
    cout<<X<<endl;
    return 0;
}