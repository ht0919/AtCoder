#include<iostream>
using namespace std;
int a[200010];
int main() {
    int N,tmp,max1=0,max2=0;
    cin >> N;
    for (int i=0; i<N; i++)
        scanf("%d", &a[i]);

    for (int i=0; i<N; i++) {
        if (max1 < a[i]) {
            max2 = max1;
            max1 = a[i];
        } else if(max2 < a[i]) {
            max2 = a[i];
        }
    }

    for (int i=0; i<N; i++) {
        if (max1 == a[i])
            printf("%d\n", max2);
        else
            printf("%d\n", max1);
    }
    return 0;
}
