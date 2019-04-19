#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[1010];
    int dp[1010][1010];
    int n,i,j,k,mm=0;
    ios::sync_with_stdio(false);
    cin >> n;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    for(i=0;i<n;i++){
        dp[i][i]=1;
        for(j=i+1;j<n;j++){
            for(k=i;k<j;k++){
                if(arr[k]>arr[j] && dp[i][k]+1 > dp[i][j])
                    dp[i][j]=dp[i][k]+1;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            mm=max(mm,dp[i][j]);
        }
    }
    cout << mm;
    return 0;
}