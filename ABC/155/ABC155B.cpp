#include <iostream>
using namespace std;
int main() {
    int N; cin>>N;
    int A[N];
    for (int i=0; i<N; i++) cin >> A[i];
    bool f=true;
    for (int i=0; i<N && f==true; i++) {
        if (A[i]%2==0) {
            if ((A[i]%3==0) || (A[i]%5==0))
                ;
            else
                f=false;
        }
    }
    if (f) cout << "APPROVED" << endl;
    else   cout << "DENIED"   << endl;
}