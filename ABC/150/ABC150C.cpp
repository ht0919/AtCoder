#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int P[8],Q[8];
int main () {
    int N; cin >> N;
    vector<int> P(N);
    vector<int> Q(N);
    for (int i=0; i<N; i++) cin >> P[i];
    for (int i=0; i<N; i++) cin >> Q[i];
    vector<int> v(N);
    iota(v.begin(), v.end(), 1);
    int i=0,a=0,b=0;
    do {
        if (P==v) a=i;
        if (Q==v) b=i;
        i++;
    } while (next_permutation(v.begin(), v.end()));
    cout << abs(a-b) << endl;
    return 0;
}