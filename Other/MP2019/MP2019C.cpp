#include<iostream>
using namespace std;
int main() {
    long long K,A,B,bis=1,yen=0,dmy=1;
    cin >> K >> A >> B;
    for (int i=0; i<K; i++) {
        if (yen == 1) {
            yen -= 1;
            bis += B;
        } else if (bis >= A && i<K-1) {
            bis -= A;
            yen += 1;
        } else {
            bis++;
        }
        dmy++;
        //cout << "bis: " << bis << " yen: " << yen << endl;
    }
    if (bis < dmy) bis = dmy;
    cout << bis << endl;
    return 0;
}
