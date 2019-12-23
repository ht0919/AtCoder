#include <iostream>
using namespace std;

int main()
{
  double deg,dis;
  cin >> deg >> dis;
  deg *= 10;
  dis /= 6;
  if (dis - (int)dis > 0.4) dis += 1;
  dis = (int)dis;

  int sa[] = {13,18,21,25,28,31,33,36,37,40,42,0};
  int ans=0, now=2;

  for (int i=0; ; now+=sa[i],i++) {
    if (now >= dis || i == 12) {
      ans = i;
      break;
    }
  }

  if (ans == 0) {
    cout << "C 0\n";
  } else {
    string answ[] = {
      "N","NNE","NE","ENE", "E","ESE","SE","SSE",
      "S","SSW","SW","WSW", "W","WNW","NW","NNW"
    };
    dis = 2250;
    now = 1125;
    for (int i=0; ;i++,now+=dis) {
      if ((i==0 && deg>34874) || now>deg || i==15) {
        cout << answ[i] << " " << ans << endl;
        break;
      }
    }
  }
  return 0;
}
