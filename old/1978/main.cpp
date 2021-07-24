#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, i, j, cnt=0, temp;
    bool isprime[1010];
    memset(isprime,true,sizeof(isprime));
    for (i=2;i<40;i++){
        for(j=i*2;j<1005;j+=i)
            isprime[j]=false;
    }
    isprime[1] = false;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> temp;
        if(isprime[temp])
            cnt++;
    }
    cout << cnt;
    return 0;
}