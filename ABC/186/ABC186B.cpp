#include <iostream>
using namespace std;
int main() {
  int H,W; cin>>H>>W;
  int A[H][W],min=100;
  for (int i=0; i<H; i++)
    for (int j=0; j<W; j++) {
      cin>>A[i][j];
      if (min > A[i][j]) min = A[i][j];
    }
  int ans=0;
  for (int i=0; i<H; i++)
    for (int j=0; j<W; j++) {
      if (min<A[i][j]) ans += (A[i][j] - min);
    }
  cout<<ans<<endl;
  return 0;
}