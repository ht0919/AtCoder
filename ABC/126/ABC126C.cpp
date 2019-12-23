#include<iostream>
using namespace std;
double k,i,n,p,q,s;
int main() {
    scanf("%lf%lf", &n, &k);
    for(i=1;i<=n;i++) {
        for(p=i,q=1; p<k; p*=2) q /= 2;
        s += q;
    }
    printf("%.9lf", s/n);
    return 0;
}