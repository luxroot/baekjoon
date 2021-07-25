#include <cstdio>
#include <deque>
#include <list>
#include <utility>
#include <algorithm>

using namespace std;

int n, m;
int map[1010][1010];

typedef pair<int, int> coord;

inline coord add(const coord& a, const coord& b) {
  return {a.first+b.first, a.second+b.second};
}

inline bool is_wall(coord& c) {
  return map[c.first][c.second] == -1;
}

inline bool is_out(coord& c) {
  return c.first < 0 || c.second < 0 ||
    c.first >= n || c.second >=m;
}

int bfs(deque<coord> qu) {
  list<coord> offsets = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
  deque<coord> cq{qu};
  int days = 1, i, j;
  while(!qu.empty()){
    cq = qu;
    qu.clear();
    while(!cq.empty()){
      auto cur = cq.front();
      cq.pop_front();
      for(const auto& it: offsets){
        auto probing = add(cur, it);
        if(!is_wall(probing) && !is_out(probing) &&
            !map[probing.first][probing.second]){
          map[probing.first][probing.second] = days;
          qu.push_back(probing);
        }
      }
    }
    days++;
  }
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      if(map[i][j] == 0)
        return -1;
    }
  }
  return days-2;
}

int main() {
  int i,j;
  deque<coord> qu;
  scanf("%d %d", &m, &n);
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d", &map[i][j]);
      if(map[i][j] == 1){
        qu.push_back({i, j});
      }
    }
  }
  auto days = bfs(qu);
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
//      printf("%d ", map[i][j]);
    }
//    puts("");
  }
  printf("%d\n", days);
  return 0;
}
