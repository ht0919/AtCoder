#include<iostream>
using namespace std;
int main() {
    int N,M;
    cin >> N >> M;
    int K[N],A[N][M];
    for (int i=0; i<N; i++) {
        cin >> K[i];
        for (int j=0; j<K[i]; j++) {
            cin >> A[i][j];
        }
    }

    int food=M,cnt=0;
    while (food>0) {
        int hit=0;
        for (int i=0; i<N; i++) {
            for (int j=0; j<K[i]; j++) {
                if (food == A[i][j]) hit++;
            }
        }
        if (hit == N) cnt++;
        food--;
    }
    cout << cnt << endl;
    return 0;
}
