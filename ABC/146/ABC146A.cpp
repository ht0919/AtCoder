#include <iostream>
using namespace std;
int main() {
    string W[] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    string S; cin >> S;
    int cnt = 0;
    for (int i=0; i<7; i++) {
        if (S == W[i]) {
            cnt = i - 7;
        }
    }
    cout << abs(cnt) << endl;
    return 0;
}
