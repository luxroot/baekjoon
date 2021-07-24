#include <iostream>

using namespace std;

int main(){
    int n,k,dp[210][210],i,j,l;
    cin >> n >> k;
    for(i=0;i<=n;i++){
        dp[1][i]=1;
    }
    for(i=2;i<=k;i++){
        dp[i][0]=1;
        for(j=1;j<=n;j++){
            dp[i][j]=0;
            for(l=0;l<=j;l++){
                dp[i][j]+=dp[i-1][l];
                dp[i][j]%=1000000000;
            }
        }
    }
    // for(i=0;i<=k;i++){
    //     for(j=0;j<=n;j++){
    //         cout << dp[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    cout << dp[k][n];
    return 0;
}