#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j;
    string tmp;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> tmp;
        int cnt=0,result=0;
        for(j=0;j<tmp.size();j++){
            if(tmp[j]=='O')
                result += (++cnt);
            else
                cnt=0;
        }
        cout<<result<<endl;
    }
    return 0;
}