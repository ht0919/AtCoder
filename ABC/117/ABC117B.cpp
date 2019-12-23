#include <iostream>
using namespace std;
int main() {
    int N,max=0,sum=0;
    cin >> N;
    int L[N];
    for (int i=0; i<N; i++) {
        cin >> L[i];
        if (max < L[i]) max = L[i];
    }
    bool flg = true;
    for (int i=0; i<N; i++) {
        if (max == L[i] && flg == true) {
            flg = false;
        } else {
            sum += L[i];
        }
    }
    if (max < sum)
        cout << "Yes" << endl;
    else
        cout << "No"  << endl;
    return 0;
}
