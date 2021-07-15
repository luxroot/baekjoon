#include <algorithm>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n, m, i, min_cnt;
  vector<char> arr;
  cin >> n >> m;
  arr.resize(m);
  for(i=0;i<m;i++) {
    cin >> arr.at(i);
  }
  min_cnt = abs(n - 100);
  for(i=0;i<=1000000;i++) {
    bool has_missing = false;
    for(const auto& it : to_string(i)) {
      bool is_in = true;
      for(const auto& chr : arr) {
        if(chr == it) {
          is_in = false;
          break;
        }
      }
      if(!is_in) {
        has_missing = true;
        break;
      }
    }
    if(has_missing) continue;
    min_cnt = min(min_cnt, static_cast<int>(to_string(i).size()) + abs(i-n));
  }
  cout << min_cnt;
  return 0;
}

