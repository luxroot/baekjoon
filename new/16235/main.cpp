#include <cstdio>
#include <vector>

using namespace std;

int main() {
  vector<pair<int, int>> ts[11][11];
  vector<pair<int, int>> offsets = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1},
    {1, -1}, {1, 0}, {1, 1}};
  int n, m, k, x, y, age, tmp, need, fed, a, b;
  int g[11][11], nuts[11][11], d[11][11];
  scanf("%d %d %d", &n, &m, &k);
  auto is_out = [=](int x, int y) { return x<1 || y<1 || x>n || y>n; };
  auto for_all = [&](auto f) {
    for(int i=0; i<n*n; i++) {
      f(i/n+1, i%n+1);
    }
  };
  for_all([&](int x, int y) {
    g[x][y] = 5;
  });
  for_all([&](int x, int y) {
    scanf("%d", &tmp);
    nuts[x][y] = tmp;
  });
  while(m--) {
    scanf("%d %d %d", &x, &y, &age);
    ts[x][y].push_back({age, 1});
  }
  while(k--) {
    for_all([&](int x, int y) {
      d[x][y] = 0;
      auto& c = ts[x][y];
      auto r = c.rend();
      for(auto it = c.rbegin(); it!= c.rend(); ++it) {
        need = it->first * it->second;
        if(g[x][y] >= need) {
          g[x][y] -= need;
          ++(it->first);
        } else {
          fed = g[x][y] / it->first;
          d[x][y] += (it->second - fed) * (it->first / 2);
          if(fed) {
            it->second = fed;
            g[x][y] %= it->first;
            ++(it->first);
          }
          else if(r == c.rend()) {
            r = it;
          }
        }
      }
      if(r != c.rend()) {
        c.erase(c.begin(), c.begin() + (c.rend() - r));
      }
    });
    for_all([&](int x, int y) {
      g[x][y] += d[x][y] + nuts[x][y];
      for(const auto& it : ts[x][y]) {
        if(!(it.first % 5)) {
          for(const auto & o : offsets) {
            a = x + o.first;
            b = y + o.second;
            if(!is_out(a, b)) {
              auto& current_tree = ts[a][b];
              if(!current_tree.empty() && current_tree.back().first == 1) {
                current_tree.back().second += it.second;
              } else {
                current_tree.push_back({1, it.second});
              }
            }
          }
        }
      }
    });
  }
  int cnt = 0;
  for_all([&](int x, int y) {
    for(const auto& it : ts[x][y]) {
      cnt += it.second;
    }
  });
  printf("%d\n", cnt);
  return 0;
}

