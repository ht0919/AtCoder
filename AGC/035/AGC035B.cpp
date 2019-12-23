#include <iostream>
#include <vector>
using namespace std;
#define N 300000
 
int n,m,x,y,xb,p[N],q[N],dep[N];
bool vis[N];
vector<int> g[N];
 
bool dfs(int u, int fa) {
	int s = 0;
    vis[u] = 1;
    dep[u] = dep[fa] + 1;
	for ( auto v:g[u] ) {
		if ( !vis[v] ) {
			s ^= dfs(v, u);
		} else {
			if ( dep[v] > dep[u] ) {
				p[++xb] = u;
                q[xb] = v;
				s ^= 1;
			}
        }
    }
	if (s) {
        p[++xb] = u;
        q[xb] = fa;
    } else {
        p[++xb] = fa;
        q[xb] = u;
    }
	return s^1;
}

int main() {
	scanf("%d%d", &n, &m);
    //cin >> n >> m;
	for (int i=1; i<=m; ++i) {
		scanf("%d%d", &x, &y);
        //cin >> x >> y;
		g[x].push_back(y);
        g[y].push_back(x);
	}
	if ( !dfs(1,0) ) {
        puts("-1");
        //cout << "-1" << endl;
        return 0;
    }
	for (int i=1; i<=m; ++i) {
        printf("%d %d\n", p[i], q[i]);
        //cout << p[i] << ' ' << q[i] << endl;
    }

	return 0;
}
