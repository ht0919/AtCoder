#include <iostream>
using namespace std;
int main() {
    int K,X,S,E;
    cin >> K >> X;
    S = X - K + 1;
    E = X + K - 1;
    for (int i=S; i<=E; i++) {
        if (i >= -1000000 && i <= 1000000)
            cout << i << ' ';
    }
    cout << endl;
    return 0;
}