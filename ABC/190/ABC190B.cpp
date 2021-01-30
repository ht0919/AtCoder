#include <iostream>
using namespace std;
int N,S,D,X,Y;
string ans="No";
int main() {
    cin>>N>>S>>D;
    for (int i=0; i<N; i++) {
        cin>>X>>Y;
        if (X<S and Y>D) {
            ans="Yes";
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}