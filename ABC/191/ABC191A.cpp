#include <iostream>
using namespace std;
int main() {
    int V,T,S,D; cin>>V>>T>>S>>D;
    double X=(double)D/V;
    if ( X>=T && X<=S )
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    return 0;
}