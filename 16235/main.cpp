#include <algorithm>
#include <deque>
#include <iostream>
#include <vector>

using namespace std;

typedef struct _Ground {
  deque<int> atrees; // denotes alive trees
  int nut;           // denotes current nutrients in that ground
  deque<int> dtrees; // denotes dead trees
} Ground;

vector<vector<Ground>> ground;
vector<vector<int>> nutrient;
int n, m, k;

void spring() {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      for (auto it = ground[i][j].atrees.begin();
           it != ground[i][j].atrees.end(); it++) {
        if (ground[i][j].nut < *it) { // case which not enough nutrients
          ground[i][j].dtrees = deque<int>(it, ground[i][j].atrees.end());
          ground[i][j].atrees.erase(it, ground[i][j].atrees.end());
          break;
        }
        ground[i][j].nut -= (*it);
        (*it)++;
      }
    }
  }
}

void summer() {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      for (auto it : ground[i][j].dtrees) {
        ground[i][j].nut += it / 2;
      }
      ground[i][j].dtrees.clear();
    }
  }
}

void fall() {
  int i, j;
  int t, xx, yy;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      for (auto it : ground[i][j].atrees) {
        if (it % 5 != 0)
          continue;
        for (t = 0; t < 9; t++) {
          // Set up x, y diff
          xx = t / 3 - 1;
          yy = t % 3 - 1;
          // Same position
          if (xx == 0 && yy == 0) {
            continue;
          }
          // Out of ground
          if (i + xx == -1 || i + xx == n || j + yy == -1 || j + yy == n) {
            continue;
          }
          // Makes children
          ground[i + xx][j + yy].atrees.push_front(1);
        }
      }
    }
  }
}

void winter() {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      ground[i][j].nut += nutrient[i][j];
    }
  }
}

// counting function
int count() {
  int i, j, cnt = 0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      cnt += ground[i][j].atrees.size();
    }
  }
  return cnt;
}

void year() {
  spring();
  summer();
  fall();
  winter();
}

int main() {
  int i, j;
  ios::sync_with_stdio(false);

  cin >> n >> m >> k;
  ground.reserve(n);
  nutrient.reserve(n);
  for (i = 0; i < n; i++) {
    ground[i].resize(n); // to initialize deque
    nutrient[i].reserve(n);
    for (j = 0; j < n; j++) {
      ground[i][j].nut = 5;
    }
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      cin >> nutrient[j][i];
    }
  }
  for (i = 0; i < m; i++) {
    int x, y, z;
    cin >> x >> y >> z;
    ground[y - 1][x - 1].atrees.push_front(z);
  }
  for (i = 0; i < k; i++) {
    year();
  }

  cout << count();
  return 0;
}
