#include<iostream>
using namespace std;
int main() {
    string S,A[]={"YYMM","MMYY","AMBIGUOUS","NA"};
    cin >> S;
    int aa,bb;
    aa = (S[0] - '0') * 10;
    aa += S[1] - '0';
    bb = (S[2] - '0') * 10;
    bb += S[3] - '0';

    int i=0;
    if (aa >= 1 and aa <= 12) {
        if (bb >= 1 && bb <= 12) {
            i = 2;
        } else {
            i = 1;
        }
    } else if (bb >= 1 && bb <= 12) {
        i = 0;
    } else {
        i = 3;
    }

    cout << A[i] << endl;
    return 0;
}
