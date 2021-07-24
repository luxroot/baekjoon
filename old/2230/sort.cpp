#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,temp,r=2000000000;
    int a[100005];
    cin >> n >> m;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    int i = 0, j = 0;
    while (j < n) {
        if (a[j] - a[i] < m) j++;
        else r = min(r, a[j] - a[i++]);
    }
    printf("%d", r);
}
