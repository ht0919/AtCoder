#include <iostream>
using namespace std;

long a,b,c;
int main(){
    for(; c=getchar(), ~c;) {
        if (c%2)    a += b;
        else        b++;
    }
    printf("%ld",a);
}