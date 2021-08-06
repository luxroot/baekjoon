#include <cstdio>
#include <algorithm>

using namespace std;

int arr[201], dp[201];

int main() {
  int n, i, j, max_increasing=0;
  scanf("%d", &n);
  for(i=0;i<n;++i) {
    scanf("%d", &arr[i]);
  }
  fill(dp, dp+201, 1);
  for(i=1;i<n;++i) {
    for(j=0;j<i;++j) {
      if(arr[j] < arr[i]) {
        dp[i] = max(dp[i], dp[j]+1);
      }
    }
  }
  for(i=0;i<n;++i){
    printf("%d:%d\t:%d\n", i, arr[i], dp[i]);
    max_increasing = max(max_increasing, dp[i]);
  }
  printf("%d\n", n-max_increasing);
  return 0;
}
