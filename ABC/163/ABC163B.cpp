#include<iostream>
using namespace std;
int main() {
    int N,M; cin>>N>>M;
    int sum=N;
    for (int i=0; i<M; i++) {
        int tmp; cin>>tmp;
        sum -= tmp;
    }
    if (sum>=0)
        cout<<sum<<endl; 
    else
        cout<<-1<<endl;
    return 0;
}