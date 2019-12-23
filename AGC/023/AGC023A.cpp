// Atcoder Grand Contest 023 A ver 3.0
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  // データ入力
  int n = 0;
  cin >> n;
  int array[n];
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }
  // 累積和を作成
  long long int csum[n+1];
  csum[0] = 0;
  for (int i = 0; i < n; i++) {
    csum[i+1] = csum[i] + array[i];
  }
  // 累積和をソート
  sort(csum, csum+n+1);
  // 累積和の同じ値をカウント
  long long int count = 0, flag = 0;
  long long int before = csum[0];
  for (int i = 1; i < n + 1; i++) {
    if (before == csum[i]) {
      count++;
      if (flag != 0) {
        count += flag;
      }
      flag++;
    } else {
      flag = 0;
    }
    before = csum[i];
  }
  // 結果を表示
  cout << count << endl;
  return 0;
}
