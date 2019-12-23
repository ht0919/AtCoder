#include<iostream>
using namespace std;
int main() {
	int N,a=0,b=0;
	string S;
	cin >> N >> S;
	for(int i=0; i<N; i++) {
		if(S.at(i) == '#')
			a++;
		else if(S.at(i) == '.' && a>0) {
			b++;
			a--;
		}
	}
	cout << b << endl;
}
