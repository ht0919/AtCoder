#include <iostream>
using namespace std;
int main() {
    int N,A,B; cin>>N;
    long long int sum=0;
    for (int i=0; i<N; i++) {
        cin>>A>>B;
        sum += (long long int)(A+B)*(B-A+1)/2;
    }
    cout<<sum<<endl;
    return 0;
}