#include<cstdio>
long long int a,b,x;
int main() {
    scanf("%lld",&x);
    for (a=-1000; a<=1000; ++a) {
        for (b=-1000; b<=1000; ++b) {
            if (a*a*a*a*a-b*b*b*b*b == x) {
                printf("%lld %lld",a,b);
                return 0; 
            }
        }
    }
}