#include <iostream>
using namespace std;

#define N 100001
int a[N], p[N];

int f(int x) {
  if (p[x] == x) p[x] = x;
  else           p[x] = f(p[x]);
  return p[x];
}

void u(int x, int y) {
  p[f(x)] = f(y);
}

int main() {
  int n, m;
  cin >> n >> m;
  for(int i=1; i<=n; i++) {
    cin >> a[i];
    p[i] = i;
  }

  for(int i=1, x, y; i<=m; i++) {
    cin >> x >> y;
    u(x, y);
  }

  int r=0;
  for(int i=1; i<=n; i++)
    if (f(i) == f(a[i])) r++;
  cout << r << endl;

  return 0;
}
