#include <iostream>
using namespace std;
typedef long long ll;
ll n,ans;
void dfs(ll s,ll r,bool a,bool b,bool c){
    if(s>n)return;
    if(a&b&c)ans++;
    dfs(s+r*3,r*10,true,b,c);
    dfs(s+r*5,r*10,a,true,c);
    dfs(s+r*7,r*10,a,b,true);
}
int main(void){
    cin>>n;
    dfs(0,1,false,false,false);
    cout<<ans<<endl;
}
