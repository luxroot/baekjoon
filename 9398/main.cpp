#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        bool x=0,y=0,z=0,k=0;
        for(j=0;j<a.size();j++){
            if(a[j]>='a' && a[j]<='z') x=1;
            if(a[j]>='A' && a[j]<='Z') y=1;
            if(a[j]>='0' && a[j]<='9') z=1;
            if(x&&y&&z){
                cout<<a[j]<<' ';
                cout<<j+1<<endl;
                k=1;
                break;
            }
        }
        if(!k)  cout<<0<<endl;
    }
    return 0;
}
