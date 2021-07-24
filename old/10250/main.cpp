#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases,i,h,w,n;
    cin>> cases;
    for(i=0;i<cases;i++){
        cin>>h>>w>>n;
        n-=1;
        cout<<(n%h+1)*100+n/h+1<<endl;
    }
    return 0;
}
