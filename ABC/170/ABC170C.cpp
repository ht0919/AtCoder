#include<bits/stdc++.h>
using namespace std;
int main() {
    int x,n;
    cin>>x>>n;
    set<int> p;
    for (int i=0;i<n;i++) {
        int a;
        cin>>a;
        p.insert(a);
    }
    int m=0;
    for (int i=0;i<=101;i++)
        m = (abs(x-i) < abs(x-m) && !p.count(i) ? i : m);
    cout<<m<<endl;
}