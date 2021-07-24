#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i,n;
    long long dp[100][2];
    memset(dp,0,sizeof(dp));
    cin >> n;
    dp[1][1]=1;
    dp[2][0]=1;
    for(i=3;i<=n;i++){
        dp[i][0]=dp[i-1][0]+dp[i-1][1];
        dp[i][1]=dp[i-1][0];
    }
    cout << dp[n][0]+dp[n][1];
    return 0;
}