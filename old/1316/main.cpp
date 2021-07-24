#include <bits/stdc++.h>
#include <cstring>

using namespace std;

bool already[27];

int main()
{
    int n,i,cnt=0,j;
    string temp;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> temp;
        memset(already,0,sizeof(already));
        char prev='A';
        for(j=0;j<temp.size();j++){
            if(prev!=temp[j] & already[temp[j]-'a']){
                goto aa;
            }
            if(prev!=temp[j])
                already[temp[j]-'a']=true;
            prev=temp[j];
        }
        cnt++;
        aa: ;
    }
    cout << cnt << endl;
    return 0;;
}