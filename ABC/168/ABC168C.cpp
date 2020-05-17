#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a,b,h,m;
  cin>>a>>b>>h>>m;
  double ans=sqrt(a*a+b*b-2*a*b*cos((h*60-11*m)*3.14159265358979323846/360));
  printf("%.10lf\n", ans);
}