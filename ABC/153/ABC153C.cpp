#include<algorithm>
#include <iostream>
using namespace std;
long long C;
int A[200001];
int main() {
    int N,K; cin >> N >> K;
	for(int i=0; ++i<=N;) cin >> A[i];
	sort(A+1, A+N+1);
	for(int i=1; i<=N-K; ++i) C += A[i];
    cout << C << endl;
    return 0;
}