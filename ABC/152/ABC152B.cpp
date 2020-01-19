#include <iostream>
using namespace std;
int main() {
    char a,b;
    cin >> a >> b;
    string aa="",bb="";
    for (int i=0; i<(b-'0'); i++) aa += a;
    for (int i=0; i<(a-'0'); i++) bb += b;
    if (aa <= bb )
        cout << aa << endl;
    else
        cout << bb << endl;
    return 0;
}