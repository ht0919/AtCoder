#include <iostream>
using namespace std;
int main() {
    int N; cin>>N;
    int T[4]={0,0,0,0}; string s;
    for (int i=0; i<N; i++) {
        cin>>s;
        if (s=="AC") {
            T[0]++;
        } else if (s=="WA") {
            T[1]++;
        } else if (s=="TLE") {
            T[2]++;
        } else if (s=="RE") {
            T[3]++;
        }
    }
    printf("AC x %d\n",  T[0]);
    printf("WA x %d\n",  T[1]);
    printf("TLE x %d\n", T[2]);
    printf("RE x %d\n",  T[3]);
    return 0;
}