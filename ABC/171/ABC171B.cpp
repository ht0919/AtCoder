#include <iostream>
#include <algorithm>
using namespace std;
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))
int main() {
    int N,K; cin>>N>>K;
    int array[N];
    for (int i=0; i<N; i++) cin>>array[i];
    sort(array, array + SIZE_OF_ARRAY(array));
    int sum=0;
    for (int i=0; i<K; i++) sum += array[i];
    cout << sum << endl;
    return 0;
}