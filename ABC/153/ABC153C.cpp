#include<algorithm>
#include <iostream>
using namespace std;
long long C;
int A[200000];
int main() {
    int N,K; cin >> N >> K;
	for(int i=0; i<N; i++) cin >> A[i];
	sort(A, A+N);
	for(int i=0; i<(N-K); i++) C += A[i];
    cout << C << endl;
    return 0;
}