#include <iostream>
#include <cstring>
#include <climits>

using namespace std;

int main()
{
    int n, i, j;
    bool isprime[246922];
    memset(isprime,true,sizeof(isprime));
    for (i=2;i<497;i++){
        for(j=i*2;j<246922;j+=i)
            isprime[j]=false;
    }
    
    isprime[1] = false;
    n=1;
    while(n){
        int cnt=0;
        cin >> n;
        for(i=n+1;i<=2*n;i++)
            if(isprime[i])
                cnt++;
        printf("%d\n",cnt);
    }
    
    
    return 0;
}