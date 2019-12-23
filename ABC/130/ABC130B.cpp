#include<iostream>
using namespace std;
int L[110], D[110];
int main() {
    int N,X;
    cin >> N >> X;
    for (int i=1; i<=N; i++) cin >> L[i];

    D[1]=0;
    for (int i=2; i<=(N+1); i++) {
        D[i]=D[i-1]+L[i-1];
    }

    int cnt=0;
    for (int i=1; i<=(N+1); i++) {
        if (D[i] <= X) cnt++;
        else break;
    }
    cout << cnt << endl;
    return 0;
}
