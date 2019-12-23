#include<iostream>
#include<string>
using namespace std;
int H,W,cnt=0;
string s;
char A[1001][1001];
int main() {
    cin >> H >> W;
    for (int i=0; i<H; i++) {
        cin >> s;
        for (int j=0; j<W; j++) {
            A[i][j] = s[j];
        }
    }

    bool flg;
    do {
        for (int i=0; i<H; i++) {
            for (int j=0; j<W; j++) {
                if (A[i][j]=='.') {
                    if ((i>0   && A[i-1][j]=='#') || // Up
                        (i<H-1 && A[i+1][j]=='#') || // Down
                        (j>0   && A[i][j-1]=='#') || // Left
                        (j<W-1 && A[i][j+1]=='#'))   // Right
                            A[i][j]='$';
                }
            }
        }
        cnt++;
        flg=true;
        for (int i=0; i<H; i++) {
            for (int j=0; j<W; j++) {
                if (A[i][j]=='$') A[i][j]='#';
                if (A[i][j]=='.') flg=false;
            }
        }
    } while(!flg);

    cout << cnt << endl;
    return 0;
}
