#include <cstdio>

int main(){
    unsigned long long n;
    scanf("%lld", &n);

    int f[1500001];
    f[1] = 1;
    for(int i = 2; i <= 1500000; i++){
        f[i] = (f[i-1] + f[i-2]) % 1000000;
    }

    printf("%d", f[n % 1500000]);
    return 0;
}
