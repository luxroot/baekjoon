#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  const int ee=15, ss=28, mm=19;
  int e, s, m, i;
  int ce = 1, cs = 1, cm = 1;
  cin >> e >> s >> m;
  for(i=1;;i++) {
    if(ce==e && cs==s && cm==m){
      cout << i << endl;
      return 0;
    }
    ce = (ce) % ee + 1;
    cs = (cs) % ss + 1;
    cm = (cm) % mm + 1;
  }
  return 0;
}
