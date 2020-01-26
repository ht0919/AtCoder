#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int H,N;
    cin >> H >> N;
    bool flg=false;
    for (int i=0; i<N; i++) {
        int A; cin >> A;
        H -= A;
        if (H<=0) flg=true;
    }
    if (flg) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}