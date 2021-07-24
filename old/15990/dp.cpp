#include <iostream>
#include <algorithm>
#include <vector>

#define DIVISOR 1000000009

using namespace std;


int main() {
  int n, max_val = 0, i, j, k;
  vector<int> arr;
  vector< vector<int> > dp;
  cin >> n;
  arr.resize(n);
  for(i = 0; i < n; i++) {
    cin >> arr.at(i);
    max_val = max(arr.at(i), max_val);
  }

  dp.push_back(vector<int> {});
  dp.push_back(vector<int> {0, 1, 0, 0});
  dp.push_back(vector<int> {0, 0, 1, 0});
  dp.push_back(vector<int> {0, 1, 1, 1});

  for(i = 4; i <= max_val; i++) {
    vector<int> tmp;
    tmp.push_back(0);
    for(j = 1; j <= 3; j++) {
      int num = 0;
      for(k = 1; k <= 3; k++) {
        if(j==k) continue;
        num += dp.at(i - j).at(k);
        num %= DIVISOR;
      }
      tmp.push_back(num);
    }
    dp.push_back(tmp);
  }

  for(const auto& it : arr) {
    int sum = 0;
    for(const auto& j : dp.at(it)) {
      sum += j;
      sum %= DIVISOR;
    }
    cout << sum << endl;
  }

  return 0;
}
