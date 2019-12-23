#include <iostream>
#include <queue>
using namespace std;
int main() {
    long long int N,M,A,r=0;
    cin >> N >> M;
    priority_queue<int> que;
    for(int i=0; i<N; ++i) {
        cin >> A;
        que.push(A);
    }
    for(int i=0; i<M; ++i) {
        que.push(que.top()/2);
        que.pop();
    }
    while(!que.empty()) {
        r += que.top();
        que.pop();
    }
    cout << r;
    return 0;
}
