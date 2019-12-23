#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int n,cnt[15],x[15][15],y[15][15],ans;
void check(int w) {
	int num=0;
	for (int i=0; i<n; ++i)
		if (w>>i&1) {
			++num;
			for (int j=0;j<cnt[i];++j)
				if ((w>>x[i][j]&1)!=y[i][j]) return;
		}
	ans = max(ans,num);
}

int main() {
	scanf("%d",&n);
	for (int i=0; i<n; ++i) {
		scanf("%d",&cnt[i]);
		for (int j=0;j<cnt[i];++j)
            scanf("%d %d",&x[i][j],&y[i][j]),--x[i][j];
	}
	for (int i=1; i<1<<n; ++i) check(i);
	printf("%d", ans);
	return 0;
}