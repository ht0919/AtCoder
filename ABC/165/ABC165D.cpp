#include <iostream>
using namespace std;
int main() {
    long long int A,B,N; cin>>A>>B>>N;
    cout<<A*min(B-1,N)/B<<endl;
    return 0;
}