#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N; cin>>N;
    int L[N]; for (int i=0; i<N; i++) cin>>L[i];
    sort(L, L+N);
    int ans=0;
	for (int i=0; i<N; i++)
        for(int j=i+1; j<N; j++)
            for(int k=j+1; k<N; k++)
                if(L[i]!=L[j]&&L[j]!=L[k]&&L[i]+L[j]>L[k]) ans++;
	cout<<ans<<endl;
    return 0;
}