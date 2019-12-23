#include<iostream>
#include<regex>
using namespace std;
int main() {
    string S,A="Good";
    cin >> S;
    if ( regex_search( S, regex("(.)\\1+")) )
        A="Bad";
    cout << A << endl;
    return 0;
}
