#include <iostream>
using namespace std;
int main() {
    int N,K,ans=0;
    string S;
	cin >> N >> K >> S;
	for (int i=0; i<S.length()-1; i++)
        if (S[i] == S[i+1]) ans++;
	cout << min(N-1, ans+2*K) << endl;
}
