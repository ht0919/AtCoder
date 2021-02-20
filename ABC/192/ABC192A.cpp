#include <bits/stdc++.h>
using namespace std;
int main() {
    int X; cin>>X;
    int Y = 100;
    if (X%100!=0) {
        Y = 100 - X % 100;
    }
    cout<<Y<<endl;
    return 0;
}