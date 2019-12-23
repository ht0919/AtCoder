#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int N,M;
    cin >> N >> M;
    vector<vector<int>> s(N+1);
    int P[M],Y[M];
    for(int i=0; i<M; i++) {
        cin >> P[i] >> Y[i];
        s[P[i]].push_back(Y[i]);
    }
    for(int i=0; i<N; i++) sort(s[i+1].begin(),s[i+1].end());
    for(int i=0; i<M; i++) {
        int n = lower_bound(s[P[i]].begin(),s[P[i]].end(),Y[i]) - s[P[i]].begin() + 1;
        cout << setfill('0') << setw(6) << right << P[i];
        cout << setfill('0') << setw(6) << right << n << endl;
    }
}