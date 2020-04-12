#include<iostream>
using namespace std;
int gcd(int a, int b) {
   if (a%b == 0) {
       return(b);
   } else {
       return(gcd(b, a%b));
   }
}
int main() {
    int K; cin>>K;
    long long int cnt=0;
    for (int i=1; i<=K; i++)
        for (int j=1; j<=K; j++)
            for (int k=1; k<=K; k++)
                cnt += gcd(gcd(i,j),k);
    cout << cnt << endl;
    return 0;
}