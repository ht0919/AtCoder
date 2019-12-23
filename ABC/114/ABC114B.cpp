#include<iostream>
//#include <string>
using namespace std;
int main() {
    string S;
    cin >> S;
    int min=999;
    for (int i=0; i<S.length()-2; i++) {
        string str = S.substr(i,3);
        int num = stoi(str);
        int diff = abs(753 - num);
        if (min>diff) min=diff;
    }
    cout << min << endl;
    return 0;
}