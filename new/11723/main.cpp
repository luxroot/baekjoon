#include <cstdio>

using namespace std;

int main() {
  int m, n, bs = 0;
  char command[7];
  scanf("%d", &m);
  while(m--) {
    scanf("%s %d", command, &n);
    n--;
    switch(command[2]) {
      case 'd':
        bs |= (1 << n);
        break;
      case 'm':
        bs &= ~(1 << n);
        break;
      case 'e':
        printf("%d\n", !!(bs & (1 << n)));
        break;
      case 'g':
        bs ^= (1 << n);
        break;
      case 'l':
        bs = 0b11111111111111111111;
        break;
      case 'p':
        bs = 0;
        break;
    }
  }
  return 0;
}

