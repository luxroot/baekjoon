#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int n,m,i,j,k;
    cin >> n >> m;
    int a[101];
    memset(a,0,sizeof(a));
    while(m--){
        cin >> i >> j >> k;
        for(int t = i-1;t<j;t++)
            a[t] = k;
    }
    for(i =0;i<n;i++)
        cout << a[i] << ' ';
}