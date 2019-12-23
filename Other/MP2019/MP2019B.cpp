#include<iostream>
using namespace std;
int main() {
    int a[6], b[]={0,0,0,0};
    for (int i=0; i<6; i++) {
        cin >>a[i];
        b[a[i]-1]++;
    }

    bool f=true;
    for (int i=0; i<4; i++)
        if (b[i]>2) f=false;

    if (f) cout << "YES" << endl;
    else   cout << "NO"  << endl;
    return 0;
}
