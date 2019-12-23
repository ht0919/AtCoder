#include<stdio.h>
#include<string.h>
#define N 1005
char A[N][N];
int f[N*N][3],res=0;
int main() {
    int n,m,i,j,h=0,t=0,ans,x,y;
    int fs[8]={-1,0,0,-1,0,1,1,0}; 
    scanf("%d%d",&n,&m);
    for(i=0; i<n; i++) {
        getchar();
        for(j=0; j<m; j++) {
            scanf("%c", &A[i][j]);
            if(A[i][j]=='#') {
                f[t][0]=i,
                f[t][1]=j,
                f[t][2]=0;
                t++;
            }
            else res++;
        }
    }
    while(h<t) {
        for(i=0; i<8; i+=2) {
            x = fs[i]   + f[h][0],
            y = fs[i+1] + f[h][1];
            if(x>=0 && y>=0 && x<n && y<m && A[x][y]=='.') {
                A[x][y]='#';
                res--;
                f[t][0]=x, f[t][1]=y, f[t][2]=f[h][2]+1;
                t++;
            }
        }
        h++;
        if(!res) break;
    }
    printf("%d\n", f[t-1][2]);
}
