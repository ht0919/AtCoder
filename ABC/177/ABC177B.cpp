#include<iostream>
using namespace std;
int main() {
    string S,T; cin>>S>>T;
	int ans=T.size();
	for(int i=0; i+T.size()<=S.size(); i++) {
		int c=0;
		for (int j=0; j<T.size(); j++) c += S[i+j] != T[j];
		if (ans>c) ans=c;
	}
	cout<<ans<<endl;
    return 0;
}