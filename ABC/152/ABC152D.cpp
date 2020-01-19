#include <iostream>
using namespace std;
long D[10][10];
int main() {
    int N; cin >> N;
	for(int i=1; i<=N; i++) {
		int x = i;
		while(x >= 10) x /= 10;
		D[x][i%10]++;
	}
	long ans=0;
	for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            ans += D[i][j] * D[j][i];
	cout << ans << endl;
    return 0;
}