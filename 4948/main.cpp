#include <iostream>
#include <cstring>
#include <climits>

using namespace std;

int main()
{
    int n, i, j;
    bool isprime[300000];
    memset(isprime,0,sizeof(isprime));
    
    for (i=2;i<=600;i++){
        for(j=i*2;j<=300000;j+=i)
            isprime[j]=1;
    }
    
    isprime[1] = 1;
    n=1;
    
    while(n){
        int cnt=0;
        cin >> n;
        if(!n)
            break;
        for(i=n+1;i<=2*n;i++)
            if(!isprime[i])
                cnt++;
        printf("%d\n",cnt);
    }
    
    
    return 0;
}