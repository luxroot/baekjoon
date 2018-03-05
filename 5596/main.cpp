#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a=0,b=0,i,tmp;
    for(i=0;i<4;i++){
        cin >> tmp;
        a+=tmp;
    }
    for(i=0;i<4;i++){
        cin >> tmp;
        b+=tmp;
    }
    cout << (a>b?a:b);
    return 0;
}