#include <iostream>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

int main() {
  int H,W;
  cin >> H >> W;
  char S[H+2][W+2];
  REP(i,H) REP(j,W) cin >> S[i][j];

  int dx[]={1,-1,0,0}, dy[]={0,0,1,-1};
  bool ans = true;
  REP(i,H) {
    REP(j,W) {
      if (S[i][j]=='#') {
        bool found=false;
        REP(k,4)
        {
          int i2 = i + dx[k];
          int j2 = j + dy[k];
          if (i2>=0 && i2<H && j2>=0 && j2<W && S[i2][j2]=='#')
            found=true;
        }
        if (!found) ans = false;
      }
    }
  }

  cout << (ans?"Yes":"No") << endl;
  return 0;
}
