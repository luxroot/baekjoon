#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main() {
  long long b, n, total_cnt = 0, fill = 0;
  int x, y, z, a;
  vector< pair<int, long long> > arr;
  scanf("%d %d %d", &x, &y, &z);
  scanf("%lld", &n);
  while(n--){
    scanf("%d %lld", &a, &b);
    arr.push_back({a, b});
  }
  sort(arr.begin(), arr.end(), greater< pair<int, int> >());
  for(const auto& [a, b] : arr) {
    long long cube = (1LL << a) * (1LL << a) * (1LL << a);
    long long max_fit_cnt = 1LL * (x>>a) * (y>>a) * (z>>a);
    long long cube_using_cnt = min(b, max_fit_cnt - fill / cube);
    fill += cube * cube_using_cnt;
    total_cnt += cube_using_cnt;
  }
  if(fill == 1LL * x * y * z){
    printf("%lld\n", total_cnt);
  } else {
    puts("-1");
  }
  return 0;
}