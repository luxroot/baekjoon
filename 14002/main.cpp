#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main() {
  vector<pair <int, int>> dp;
  vector<int> arr;
  int n, i, j;
  cin >> n;
  arr.resize(n);
  for(i=0; i<n; i++) {
    cin >> arr.at(i);
  }
  for(i=0; i<n; i++) {
    dp.push_back({-1, 1}); 
    for(j=0; j<i; j++) {
      if(arr.at(j) < arr.at(i) && dp.at(j).second >= dp.at(i).second) {
        dp.at(i) = {j, dp.at(j).second + 1};
      }
    }
  }
  int len = 0, max_idx = 0;
  for(i=0; i<n; i++) {
    if(dp.at(i).second > len) {
      len = dp.at(i).second;
      max_idx = i;
    }
  }
  int cur = max_idx;
  vector<int> backtrace;
  while(cur != -1) {
    backtrace.push_back(cur);
    cur = dp.at(cur).first;
  }
  cout << len << endl;
  for(auto it = backtrace.rbegin(); it != backtrace.rend(); ++it) {
    cout << arr.at(*it) << ' ';
  }
  return 0;
}
