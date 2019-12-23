#include <iostream>
#include <algorithm>
using namespace std;
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))
int main() {
    int N;
    cin >> N;
    int v[N];
    for (int i=0; i<N; i++)
        cin >> v[i];
    sort(v, v + SIZE_OF_ARRAY(v));
    double a = (v[0] + v[1]) / 2.0;
    for (int i=2; i<N; i++) {
        a = (a + v[i]) / 2.0;
    }
    cout << a << endl;
    return 0;
}
