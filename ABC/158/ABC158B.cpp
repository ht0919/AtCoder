#include<iostream>
using namespace std;
int main() {
    long long int N,A,B;cin>>N>>A>>B;
    if (A==0) {
        cout << 0 << endl;
    } else {
        long long int x = N / (A+B);
        long long int y = N % (A+B);
        x = x * A;
        if (y > A) y = A;
        cout << (x+y) << endl;
    }
    return 0;
}