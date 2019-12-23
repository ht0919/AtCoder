#include <iostream>
using namespace std;
int main() {
    string w[] = {"Sunny", "Cloudy", "Rainy"}; 
    string S,N;
    cin >> S;
    if (S.compare(w[0])==0) {
        N = w[1];
    } else if (S.compare(w[1])==0) {
        N = w[2];
    } else if (S.compare(w[2])==0) {
        N = w[0];
    }
    cout << N << endl;
    return 0;
}
