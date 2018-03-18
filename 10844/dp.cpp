#include <cstdio>

int main()
{
    int n,i,dp[110][10];
    dp[1][0]=0;
    for(i=1;i<10;i++)
        dp[1][i]=1;
    scanf("%d", &n);
    for(i=2;i<=n;i++){
        dp[i][0]=dp[i-1][1];
        for(int j=1;j<9;j++)
            dp[i][j]=(dp[i-1][j-1]+dp[i-1][j+1])%1000000000;
        dp[i][9]=dp[i-1][8];
    }
    int sum=0;
    for(i=0;i<10;i++)
        sum=(sum+dp[n][i])%1000000000;
    printf("%d", sum);
    return 0;
}