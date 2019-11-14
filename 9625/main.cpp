#include <iostream>

using namespace std;

int main(){
    int dp[50][2],i,n;
    cin >> n;
    dp[0][0]=1;
    dp[0][1]=0;
    for(i=1;i<=n;i++){
        dp[i][0]=dp[i-1][1];
        dp[i][1]=dp[i-1][0]+dp[i-1][1];
    }
    cout << dp[n][0] << ' ' << dp[n][1];
    return 0;
}