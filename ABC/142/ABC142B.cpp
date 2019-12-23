#include <iostream>
using namespace std;
int main() {
    int N,K,tmp,cnt=0;
    cin >> N >> K;
    for (int i=0; i<N; i++) {
        cin >> tmp;
        if (tmp >= K) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
