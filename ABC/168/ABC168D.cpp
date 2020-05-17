#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
int n, m, v, u, par[200005];
vector<int> G[200005];
queue<int> qu;
int main() {
	scanf("%d%d", &n, &m);
	rep(i,m) {
		scanf("%d%d", &v, &u);
		G[v].push_back(u);
		G[u].push_back(v);
	}
	qu.push(1); par[1] = 1;
	while (!qu.empty()) {
		u = qu.front(); qu.pop();
		for(int nx: G[u]) if(!par[nx]) {
			qu.push(nx);
			par[nx] = u;
		}
	}
	puts("Yes");
	rep(i,n-1) printf("%d\n", par[i+2]);
}