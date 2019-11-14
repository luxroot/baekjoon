#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,i,j,arr[510][510];
    int dp[501][501]={0};

    cin >> n;
    
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cin >> arr[i][j];
        }
    }
    
    for(i=0;i<n;i++){
        dp[n-1][i] = arr[n-1][i];
    }

    for(i=n-1;i>=0;i--){
        for(j=0;j<=i;j++){
            dp[i][j]=max(dp[i+1][j],dp[i+1][j+1])+arr[i][j];
        }
    }

    cout << dp[0][0];
    
    return 0;
}