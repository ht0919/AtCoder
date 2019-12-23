#include <iostream>
using namespace std;
int main() {
    int N,cnt=0;
    cin >> N;
    int tmp,A[N];
    for (int i=0; i<N; i++) {
        cin >> tmp;
        A[tmp-1] = i + 1;
    }
    for (int i=0; i<N; i++) cout << A[i] << ' ';
    cout << endl;
    return 0;
}
