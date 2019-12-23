#include<iostream>
using namespace std;
int main() {
    int tbl[] = {111,222,333,444,555,666,777,888,999};
    int N;
    cin >> N;

    for (int i=0; i<9; i++) {
        if (N > tbl[i]) {
            continue;
        } else {
            cout << tbl[i] << endl;
            return 0;
        }
    }
}