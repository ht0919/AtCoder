#include<iostream>
using namespace std;
int N,A,B,C,D;
string S;
int main() {
    cin >> N >> A >> B >> C >> D >> S;
    A--,B--,C--,D--;
    S[A]='A',S[B]='B';

    for (int i=0; i<(N*10); i++) {

        if (A<C && S[A+1]=='.') {
            S[A+1] = 'A';
            S[A] = '.';
            A += 1;
        } else if (A<C && S[A+2]=='.') {
            S[A+2] = 'A';
            S[A] = '.';
            A += 2;
        }

        if ((C>D && A<B && S[B+1]=='.' && S[B-1]=='.')||
            (C>D && A<B && S[B+1]=='.' && S[B-1]=='A')) {
            ;
        } else {
            if (B<D && S[B+1]=='.') {
                S[B+1] = 'B';
                S[B] = '.';
                B += 1;
            } else if (B<D && S[B+2]=='.') {
                S[B+2] = 'B';
                S[B] = '.';
                B += 2;
            }
        }

        if (A==C && B==D) {
            cout << "Yes" << endl;
            return 0;
        }

    }

    cout << "No" << endl;
    return 0;
}
