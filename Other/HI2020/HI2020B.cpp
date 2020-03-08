#include <iostream>
#include <climits>
using namespace std;
int main() {
    int A,B,M; scanf("%d%d%d",&A,&B,&M);
    int a[A],b[B];
    int am,bm; am = bm = INT_MAX;
    for (int i=0; i<A; i++) scanf("%d", &a[i]), am = min(am, a[i]);
    for (int i=0; i<B; i++) scanf("%d", &b[i]), bm = min(bm, b[i]);
    int x,y,c,abm = am + bm;
    for (int i=0; i<M; i++) scanf("%d%d%d",&x,&y,&c),abm = min(abm, a[x-1]+b[y-1]-c);
    printf("%d\n",abm);
    return 0;
}