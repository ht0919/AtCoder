#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;

    if(N==4||N==7||N==8||N==11||N==12||N==14||N==15||N==16||N>17)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}