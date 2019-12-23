#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct drink {
  int    price;
  int    count;
};
int main() {
    int N,M;
    cin >> N >> M;
    vector<drink> drinks(N);
    for (int i=0; i<N; i++) {
        cin >> drinks[i].price >> drinks[i].count;
    }
    sort(drinks.begin(), drinks.end(),
        [](const drink& x, const drink& y) { return x.price < y.price;});
    long long cost=0;
    int count=0;
    for (int i=0; i<N; i++) {
        for (int j=0; j<drinks[i].count; j++) {
            cost += drinks[i].price;
            count++;
            if (count >= M) break;
        }
        if (count >= M) break;
    }
    cout << cost << endl;
    return 0;
}
