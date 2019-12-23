#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int p[N],max=0,sum=0,mxi=0;
    for (int i=0; i<N; i++) {
        cin >> p[i];
        if (max < p[i]) {
            max = p[i];
            mxi = i;
        }
    }
    p[mxi] = p[mxi] / 2;
    for (int i=0; i<N; i++) sum += p[i];
    cout << sum << endl;
    return 0;
}
