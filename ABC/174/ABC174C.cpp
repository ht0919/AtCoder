#include<iostream>
using namespace std;
int n,f=0;
int main() {
    cin>>n;
    for (int i=1; i<=2000000; i++) {
        f = (f*10+7) % n;
        if (!f) return cout<<i,0;
    }
    return cout<<-1,0;
}