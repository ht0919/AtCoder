#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    string W[N];
    for (int i=0; i<N; i++) {
        cin >> W[i];
    }

    for (int i=0; i<N; i++) {
        string test = W[i];
        for (int j=0; j<N; j++) {
            if (i != j && test == W[j]) {
                cout << "No" << endl;
                return 0;
            }          
        }
    }

    string test = W[0];
    for (int i=1; i<N; i++) {
        //cout << test << " " << W[i] << endl;
        if (test[test.size()-1] != W[i][0]) {
            cout << "No" << endl;
            return 0;
        }
        test = W[i];
    }

    cout << "Yes" << endl;
    return 0;
}