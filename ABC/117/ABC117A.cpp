#include<iostream>
using namespace std;
int main() {
    int T,X;
    double ans;
    cin >> T >> X;
    ans = (double)T / X;
    printf("%0.10lf\n",ans);
    return 0;
}
