#include <iostream>

using namespace std;

int main()
{
    int i,n,dp[1001];
    dp[0]=1;
    dp[1]=1;
    cin >> n;
    for(i=2;i<=n;i++){
        dp[i]=(dp[i-1]+dp[i-2]*2)%10007;
    }
    cout << dp[n];
    return 0;
}