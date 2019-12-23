#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int a,tmp;
    for (int i=0; i<N; i++) {
        cin >> tmp;
        a ^= tmp;
    }
    if (a == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
