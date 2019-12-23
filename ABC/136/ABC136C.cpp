#include <iostream>
using namespace std;
int N,H[100005],M=0;
int main() {
    cin >> N;
    for(int i=1; i<=N; i++) {
        cin >> H[i];
        if(H[i] < M) {
            cout << "No" << endl;
            return 0;
        }
        M = max(M, H[i]-1);
    }
    cout << "Yes" << endl;
    return 0;
}
