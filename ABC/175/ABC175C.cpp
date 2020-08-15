#include <iostream>
using namespace std;
int main(){
    long X,K,D; cin>>X>>K>>D;
    X=abs(X);
    if (X/D >= K)
        cout<<X-D*K<<endl;
    else
        cout<<abs(X%D-((X/D)%2==K%2?0:D))<<endl;
}