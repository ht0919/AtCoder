#include<iostream>
using namespace std;
int main() {
    int N,min=999999999;
    cin >> N;
    int W[N];
    for (int i=0; i<N; i++) cin >> W[i];
    for (int i=1; i<N; i++) {
        int S1=0,S2=0,j=0;
        for (; j<i; j++) S1 += W[j];
        for (; j<N; j++) S2 += W[j];
        if (min > abs(S1 - S2)) min = abs(S1 - S2);
    }
    cout << min << endl;
    return 0;
}
