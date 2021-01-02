#include <iostream>
#include <vector>
using namespace std;
int main() {
    long a,z=0; cin>>a;
    vector<int>x(a),y(a);
    for (int i=0; i<a; i++) {
        cin>>x.at(i)>>y.at(i);
        for (int j=0; j<i; j++)
            if (abs(y.at(i)-y.at(j)) <= abs(x.at(i)-x.at(j)))
                z++;
    }
    cout<<z<<endl;
}