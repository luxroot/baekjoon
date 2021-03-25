#include <cstdio>

using namespace std;

bool arr[6666][6666];

void solve(int n, int x, int y) {
  if (n == 1) {
    arr[x][y] = true;
    return;
  }
  int m = n / 3;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i != 1 || j != 1) {
        solve(m, x + m * i, y + m * j);
      }
    }
  }
}

int main() {
  int n = 0;
  scanf("%d", &n);
  solve(n, 0, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i][j]) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
