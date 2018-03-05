#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,a=100,b=100,ca,cb;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> ca >> cb;
        if(ca==cb)continue;
        ca<cb ? a-=cb : b-=ca;
    }
    cout << a << endl << b;
    return 0;
}