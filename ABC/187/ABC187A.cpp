#include <iostream>
using namespace std;
int main() {
    int A,B; cin>>A>>B;
    int SA = ((A/100)%10) + ((A/10)%10) + ((A/1)%10);
    int SB = ((B/100)%10) + ((B/10)%10) + ((B/1)%10);
    if (SA >= SB)
        cout<<SA<<endl;
    else
        cout<<SB<<endl;
    return 0;
}