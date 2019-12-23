#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;
int main() {
    int N; cin >> N;
    int x[N],y[N];
    for (int i=0; i<N; i++) {
        cin >> x[i] >> y[i];
    }
 
    vector<int> v(N);
    vector<double> d;
    iota(v.begin(), v.end(), 0);
    int cnt = 0;
    do {
        for (int i=0; i<N-1; i++) {
            int xx = (x[v[i]] - x[v[i+1]]) * (x[v[i]] - x[v[i+1]]);
            int yy = (y[v[i]] - y[v[i+1]]) * (y[v[i]] - y[v[i+1]]);
            d.push_back(sqrt(xx + yy));
        }
        cnt++;
    } while( next_permutation(v.begin(), v.end()) );
 
    double ans = 0.0;
    for (auto x : d) {
        ans += x;
    }
    cout << fixed << ans/cnt << endl;
    return 0;
}
