#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> A(3, vector<int>(3));
int b[10],N;
void set_b(int n) {
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (A.at(i).at(j) == n) {
                A.at(i).at(j) = 0;
                return;
            }
        }
    }
}
bool chk_b() {
    for (int i=0; i<3; i++) {
        if (A.at(i).at(0)+A.at(i).at(1)+A.at(i).at(2)==0) return true;
    }
    for (int j=0; j<3; j++) {
        if (A.at(0).at(j)+A.at(1).at(j)+A.at(2).at(j)==0) return true;
    }
    if (A.at(0).at(0)+A.at(1).at(1)+A.at(2).at(2)==0) return true;
    if (A.at(0).at(2)+A.at(1).at(1)+A.at(2).at(0)==0) return true;
    return false;
}
int main() {
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin>>A.at(i).at(j);
        }
    }
    cin>>N; for (int i=0; i<N; i++) cin>>b[i];
    bool flg=false;
    for (int i=0; i<N; i++) {
        set_b(b[i]);
        flg=chk_b();
        if (flg) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}