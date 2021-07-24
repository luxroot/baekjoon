#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[4],i;
    char b[5];
    for(i=0;i<3;i++)    cin >> a[i];
    cin >> b;
    sort(a,a+3);
    for(i=0;i<3;i++){
        if(b[i]=='A')cout<<a[0]<<' ';
        if(b[i]=='B')cout<<a[1]<<' ';
        if(b[i]=='C')cout<<a[2]<<' ';
    }
    return 0;
}