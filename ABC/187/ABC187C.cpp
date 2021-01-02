#include <iostream>
#include <string>
#include <map>
using namespace std;
int n,k;
string s[200005];
map<string,int> m;
int main() {
	cin>>n;
	for (k=1; k<=n; k++) {
		cin>>s[k];
		m[s[k]] = 1;
	}
	for (k=1; k<=n; k++) {
		string s1 = '!' + s[k];
		if (m[s1]) {
			cout<<s[k]<<endl;
			return 0;
		}
	}
	cout<<"satisfiable"<<endl;
	return 0;
}