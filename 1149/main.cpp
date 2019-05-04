#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,i,j;
    int cost[1010][3];
    int dp[1010][3];
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            cin >> cost[i][j];
        }
    }
    for(i=0;i<3;i++){
        dp[0][i] = cost[0][i];
    }
    for(i=1;i<n;i++){
        for(j=0;j<3;j++){
            dp[i][j]=0x7fffffff;
            for(int k=0;k<3;k++){
                if(j==k)    continue;
                dp[i][j] = min(dp[i][j],dp[i-1][k]+cost[i][j]);
            }                        
        }
    }

    int min_value=0x7fffffff;
    for(i=0;i<3;i++){
        min_value = min(min_value, dp[n-1][i]);
    }
    cout << min_value;
    return 0;
}