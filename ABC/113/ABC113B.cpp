#include <cmath>
#include<iostream>
using namespace std;
int main() {
    int N,T,A;
    cin >> N >> T >> A;
    double data[N];
    for (int i=0; i<N; i++) {
        int tmp;
        cin >> tmp;
        data[i] = T - tmp * 0.006;
    }
    double diff = abs(A - data[0]);
    int num = 0;
    for (int i=0; i<N; i++) {
        if (diff > abs(A - data[i])) {
            num = i;
            diff = abs(A - data[i]);
        }
    }
    cout << num+1 << endl;
    return 0;
}