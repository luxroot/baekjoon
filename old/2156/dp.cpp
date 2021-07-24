#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,i,grape[100010]={0},dp[100010]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
        cin >> grape[i];
    dp[0]=grape[0];
    dp[1]=dp[0]+grape[1];
    for(i=2;i<n;i++){
        dp[i]=max(max(dp[i-1],dp[i-2]+grape[i]),dp[i-3]+grape[i-1]+grape[i]);
    }
    printf("%d\n",dp[n-1]);
    return 0;
}