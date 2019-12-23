#include <iostream>
using namespace std;
int main() {
    int A,B,soc=1,cnt=0;
    cin >> A >> B;
    while (soc < B) {
        soc += A;
        cnt++;
        soc--;
    }
    cout << cnt << endl;
    return 0;
}
