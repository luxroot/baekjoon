#include <iostream>
#include <cstring>
#include <climits>

using namespace std;

int main()
{
    int n, i, j, sum=0, temp, m, min = -1;
    bool isprime[10010];
    memset(isprime,true,sizeof(isprime));
    for (i=2;i<101;i++){
        for(j=i*2;j<10010;j+=i)
            isprime[j]=false;
    }
    
    isprime[1] = false;
    cin >> n >> m;
    for(i=n;i<=m;i++){
        if(isprime[i] && min == -1)
            min = i;
        if(isprime[i])
            sum += i;
    }
    if(min == -1){
        cout << -1;
        exit(0);
    }
    cout << sum << endl << min <<endl;
    return 0;
}