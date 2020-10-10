#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string S,T; cin>>S>>T;
    if (S == "Y") {
        transform(T.begin(), T.end(), T.begin(), ::toupper);
        cout<<T<<endl;
    } else {
        cout<<T<<endl;
    }
}