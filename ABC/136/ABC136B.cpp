#include <iostream>
using namespace std;
int main() {
    int N,cnt=0;
    cin >> N;
    for (int i=1; i<=N; i++) {
        string str = to_string(i);
        size_t size = str.length();
        if (size % 2 == 1) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
