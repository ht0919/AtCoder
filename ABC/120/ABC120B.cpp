#include<iostream>
#include <vector>
using namespace std;
int main() {
    int a,b,c,k,i;
    vector<int> vec;
    cin >> a >> b >> k;
    c=a;
    if( a>b ) c=b;
    for(i=1; i<=c; i++)
        if( a%i==0 && b%i==0 )
            vec.push_back(i);
    cout << vec[vec.size()-k] << endl;
}
