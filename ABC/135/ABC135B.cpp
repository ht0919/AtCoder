#include<iostream>
using namespace std;
int main() {
    int N,p,a=0;
    cin >> N;
    for(int i=1; i<=N; i++) {
        cin >> p;
        if(p != i) a++;
    }
    cout << (a==0 || a==2 ? "YES":"NO") << endl;
    return 0;
}