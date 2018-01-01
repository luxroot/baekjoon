#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,m,i;
    cin>>n>>m;
    vector<bool> chk;
    chk.assign(n+5,false);
    int now=0,cnt=0;
    cout<<"<";
    for(i=0;i<n;i++){
        cnt=0;
        while(cnt!=m){
            now++;
            if(now==n+1)now=1;
            if(!chk[now]) cnt++;
            // cout<<now<<'='<<chk[now]<<'-'<<cnt<<' ';
        }
        chk[now]=true;
        cout<<now<<(i!=n-1 ?", " : ">");
    }
    return 0;
}