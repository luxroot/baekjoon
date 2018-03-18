#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,arr[1005][1005],dp[1005][1005];
    cin >> n >> m;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin >> arr[i][j];
    dp[0][0]=arr[0][0];
    for(i=1;i<m;i++)
        dp[0][i]=arr[0][i]+dp[0][i-1];
    for(i=1;i<n;i++)
        dp[i][0]=arr[i][0]+dp[i-1][0];
    for(i=1;i<n;i++){
        for(j=1;j<m;j++){
            dp[i][j]=max(max(dp[i][j-1],dp[i-1][j]),dp[i-1][j-1])+arr[i][j];
        }
    }
    // for(i=0;i<n;i++){
    //     for(j=0;j<m;j++){
    //         printf("%4d", dp[i][j]);
    //     }
    //     cout << endl;
    // }
    cout << dp[n-1][m-1];
    return 0;
}