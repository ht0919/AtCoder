#include <iostream>
using namespace std;
const int N=105;
int H,W,i,j,f[N][N];
char c[N][N];
int main() {
	scanf("%d%d",&H,&W);
	for (i=1; i<=H; ++i) scanf("%s",c[i]+1);
	f[1][1]=c[1][1]=='#';
	for (i=1; i<=H; ++i)
        for(j=1; j<=W; ++j)
            if (i>1 || j>1)
		        f[i][j] = min(
			        i>1?f[i-1][j]+(c[i][j]=='#' && c[i-1][j]=='.'):114514,
			        j>1?f[i][j-1]+(c[i][j]=='#' && c[i][j-1]=='.'):114514
                );
	        printf("%d\n",f[H][W]);
    return 0;
}