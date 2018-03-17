#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n,m,i,j;
    bool isprime[1000010];
    memset(isprime,true,sizeof(isprime));
    isprime[1]=false;
    cin >> m >> n;
    for(i=2;i<n/2+1;i++){
        if(isprime[i]){
            for(j=2*i;j<=n;j+=i)
                isprime[j]=false;
        }
    }
    for(i=m;i<=n;i++){
        if(isprime[i]){
            printf("%d\n",i);
        }
    }
    return 0;
}