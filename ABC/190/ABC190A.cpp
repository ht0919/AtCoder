#include <iostream>
using namespace std;
int main() {
    int A,B,C; cin>>A>>B>>C;
    if (C == 0) {
        if (A > B)
            cout<<"Takahashi"<<endl;
        else
            cout<<"Aoki"<<endl;
    } else {
        if (A >= B)
            cout<<"Takahashi"<<endl;
        else
            cout<<"Aoki"<<endl;
    }
    return 0;
}