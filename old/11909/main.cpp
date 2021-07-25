#include <algorithm>
#include <climits>
#include <iomanip>
#include <iostream>

using namespace std;

int n;
int map[3000][3000];
int dp[3000][3000];

void print_arr(int arr[][3000]) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      cout << setw(4) << arr[i][j];
    }
    cout << '\n';
  }
  cout << "\n\n";
}

inline int get_cost(int a, int b) {
  if (a > b) {
    return 0;
  } else {
    return b - a + 1;
  }
}

int main() {
  ios::sync_with_stdio(false);
  int i, j;
  cin >> n;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      cin >> map[i][j];
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      int u= (i == 0 ? 300 : get_cost(map[i - 1][j], map[i][j]));
      int l = (j == 0 ? 300 : get_cost(map[i][j - 1], map[i][j]));
      //      cout << setw(11) << u << setw(11) << l << "  ";
      if (i != 0 || j != 0) {
        dp[i][j] = min(dp[i - 1][j] + u, dp[i][j - 1] + l);
      }
    }
  }

  print_arr(map);
  print_arr(dp);

  cout << dp[n - 1][n - 1];

  return 0;
}
