#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;


int main() {
  int i, j, n, k;
  int coins[101];
  int* dp = new int[10001];
  memset(dp, -1, sizeof(int)*10001);
  scanf("%d%d", &n, &k);
  for(i=0; i<n; ++i) {
    scanf("%d", &coins[i]);
  }
  dp[0] = 0;
  for(i=0; i<k; ++i) {
    for(j=0; j<n; ++j) {
      if(dp[i] == -1 || i+coins[j] > k) {
        continue;
      }
      else {
        dp[i+coins[j]] = (dp[i+coins[j]] == -1) ? dp[i]+1 : min(dp[i+coins[j]], dp[i]+1);
      }
    }
  }
  for(i=0; i<=k; ++i) {
    printf("%d\t:\t%d\n",i,dp[i]);
  }
  printf("%d\n", dp[k]);
  return 0;
}
