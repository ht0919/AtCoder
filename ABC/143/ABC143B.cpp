#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int d[N];
    for (int i=0; i<N; i++) cin >> d[i];
    int n=0;
    for (int i=0; i<N; i++) {
        int m = d[i];
        for (int j=i+1; j<N; j++) {
            n += m * d[j];
        }
    }
    cout << n << endl;
    return 0;
}
