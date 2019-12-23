#include <iostream>
using namespace std;

int main() {

    int N,K;
    cin >> N >> K;

    int d = N / K;
    int p = N % K;

    if (p == 0)
        cout << 0 << endl;
    else
        cout << 1 << endl;

    return 0;
}