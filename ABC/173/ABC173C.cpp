#include <iostream>
using namespace std;
int H,W,K;
string s[6];
int main() {
	cin>>H>>W>>K;
	for (int i=0; i<H; i++) cin>>s[i];
	int ans=0;
	for (int i=0; i<1<<H; i++) {
        for (int j=0; j<1<<W; j++) {
		    int cnt=0;
		    for (int I=0; I<H; I++)
                for (int J=0; J<W; J++)
                    if (!(i>>I&1) && !(j>>J&1))
                        cnt += s[I][J] == '#';
		    ans += cnt == K;
	    }
    }
	cout<<ans<<endl;
    return 0;
}