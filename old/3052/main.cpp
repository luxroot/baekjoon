#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,a[10],cnt=1;
    for(i=0;i<10;i++){
        cin >> a[i];
        a[i]%=42;
    }
    sort(a,a+10);
    for(i=0;i<9;i++){
        if(a[i]!=a[i+1])
            cnt++;
    }
    cout << cnt;
    return 0;

}