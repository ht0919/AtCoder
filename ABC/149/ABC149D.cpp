#include<iostream>
using namespace std;
int N,K,R,S,P;
string s;
bool exs[1<<17];
int main() {
	cin >> N >> K >> R >> S >> P >> s;
	int ans = 0;
	for(int i=0; i<N; i++) {
		if(i<K || s[i-K]!=s[i] || !exs[i-K]) {
			ans += s[i]=='r' ? P:s[i]=='s' ? R:S;
			exs[i] = true;
		}
	}
	cout << ans << endl;
}
