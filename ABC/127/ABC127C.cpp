#include<iostream>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    int x=1,y=n;
    for (int i=0; i<m; i++) {
        int a,b;
        cin >> a >> b;
        x = max(x,a);
        y = min(y,b);
    }
    cout << max(y-x+1,0) << endl;
}
