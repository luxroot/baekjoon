#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int n, s, i, j, cnt = 0;
    vector<int> arr;
    scanf("%d %d", &n, &s);
    arr.resize(n);
    for(i=0; i<n; i++){
        scanf("%d", &arr.at(i));
    }
    for(i=1; i < (1<<n); i++) {
        int cur = 0;
        for(j=0; j<n; j++) {
            if(1<<j & i){
                cur += arr.at(j);
            }
        }
        if(cur == s) {
            ++cnt;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
