#include<bits/stdc++.h>
using namespace std;
#define c(n) count(s.begin(),s.end(),n)
int main() {
    string s;
    cin >> s;
    cout << min( c('0'),c('1') ) * 2;
}