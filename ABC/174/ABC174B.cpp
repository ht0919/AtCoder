#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int N,D,X,Y,A=0; cin>>N>>D;
    for (int i=0; i<N; i++) {
        cin>>X>>Y;
        if (sqrt(pow(X,2)+pow(Y,2)) <= D) {
            A++;
        }
    }
    cout<<A<<endl;
    return 0;
}