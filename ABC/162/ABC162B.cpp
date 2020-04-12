#include<iostream>
using namespace std;
int main() {
    int N; cin>>N;
    long long int cnt=0;
    for (int i=1; i<=N; i++) {
        if (i%15==0||i%5==0||i%3==0) {
            ;
        } else {
            cnt += i;
        }
    }
    cout << cnt << endl;
    return 0;
}