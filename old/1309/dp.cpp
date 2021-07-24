#include <iostream>
#include <algorithm>
#include <vector>

const int n_limit = 100000;
const int divisor = 9901;

using namespace std;

int main() {
  vector<unsigned long long> dp;
  dp.push_back(1);
  dp.push_back(3);
  for(int i = 0; i < n_limit - 1; i++) {
    auto next = dp.at(i) + dp.at(i+1)*2;
    dp.push_back(next % divisor);
  }
  int n;
  cin >> n;
  cout << dp.at(n);
}

