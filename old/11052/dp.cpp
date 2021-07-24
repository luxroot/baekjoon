#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int n, i;
  vector<int> arr, dp;
  cin >> n;
  arr.resize(n+1);
  dp.resize(n+1);
  for(i = 0; i < n; i++) {
    cin >> arr.at(i+1);
  }
  for(i=0; i<=n; i++) {
    for(int j = 1; j <= arr.size(); j++) {
      if (i+j > n) continue;
      dp.at(i+j) = max(dp.at(i+j), dp.at(i) + arr.at(j));
    }
  }
  cout << dp.back() << endl;
  return 0;
}
