#include <iostream>
using namespace std;
bool used[200500];
int m,n,i;
int main() {
	cin>>n;
	while (n--) {
		cin>>i;
		used[i]=true;
		while(used[m]) m++;
		cout<<m<<endl;
	}
    return 0;
}