#include <iostream>
using namespace std;
int n;
int dfs(long long v, int m) {
    if (n < v)
        return 0;
    else
        return (m==7) + dfs(10*v+3, m|1) + dfs(10*v+5, m|2) + dfs(10*v+7, m|4);
}

int main() {
    cin >> n;
    cout << dfs(0, 0) << endl;
}
