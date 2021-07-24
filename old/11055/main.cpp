#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[1010];
    int dp[1010]={0,};
    int n,i,j;
    ios::sync_with_stdio(false);
    cin >> n;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    dp[0]=arr[0];
    for(i=1;i<n;i++){
        dp[i]=arr[i];
        for(j=0;j<i;j++){
            if(arr[j]<arr[i] && dp[j]+arr[i] > dp[i])
                dp[i]=dp[j]+arr[i];
        }
    }
    cout << *max_element(dp,dp+n);
    return 0;
}