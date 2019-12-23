#include <iostream>
#include <cmath>
using namespace std;

#define rep(i, N) for (int i = 0; i < N; i++)
#define pb push_back

typedef long long ll;
typedef pair<ll, int> ll_i;

double f(ll N){
    ll n, dig;
    n = N;
    ll sum = 0;

    while(n){
        dig = n % 10;
        sum = sum + dig;
        n = n / 10;
    }
    return (double)N / sum;
}

int main() {
    ll K;
    cin >> K;
    ll a = 1, order=1;
    for(int i = 0; i < K; i++){
        cout << a << endl;
        if (f(a + pow(10, order-1)) > f(a + pow(10, order))){
            order++;
        }
        a += pow(10, order-1);
    }
    return 0;
}
