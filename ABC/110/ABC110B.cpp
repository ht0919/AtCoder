#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int N,M,X,Y;
    cin >> N >> M >> X >> Y;
    int x[N],y[M];

    for (int i=0; i<N; i++) { cin >> x[i]; }
    sort(x,x+N);

    for (int i=0; i<M; i++) { cin >> y[i]; }
    sort(y,y+M);

    if (x[N-1] < y[0] && x[N-1] < Y && y[0] > X) {
        cout << "No War" << endl;
    } else {
        cout << "War" << endl;
    }

    return 0;
}