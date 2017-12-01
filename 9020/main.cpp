#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, i, j, m, k;
    bool isprime[300000];
    memset(isprime,0,sizeof(isprime));
    
    for (i=2;i<=600;i++){
        for(j=i*2;j<=300000;j+=i)
            isprime[j]=1;
    }
    
    isprime[1] = 1;
    
    
    cin >> n;
    
    for(i=0;i<n;i++){
        cin >> m;
        for(j=m/2;j>0;j--){
            // cout << j << isprime[j] << endl;
            if(!isprime[j]){
                for(k=j;k<=m-j+1;k++){
                    // cout << j << k << endl;
                    if(!isprime[k]){
                        if(j+k == m){
                            cout << j <<" " << k << endl;
                            goto AA;
                        }
                    }
                }
            }
        }
AA:
;
    }
    
    return 0;
}