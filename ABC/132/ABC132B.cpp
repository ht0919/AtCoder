#include<iostream>
using namespace std;
int main() {
    int n,cnt=0;
    cin >> n;
    int p[n];
    for (int i=0; i<n; i++)
        cin >> p[i];
    for (int i=0; i<n-2; i++) {
        if (( p[i] > p[i+1] && p[i+2] < p[i+1] ) ||
            ( p[i] < p[i+1] && p[i+2] > p[i+1] ))
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
