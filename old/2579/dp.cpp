#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, i;
    int arr[310];
    int dp[310][2];
    cin >> n;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    dp[0][0]=arr[0];
    dp[1][0]=arr[0]+arr[1];
    dp[1][1]=arr[1];
    dp[2][0]=arr[1]+arr[2];
    dp[2][1]=arr[0]+arr[2];
    for(i=3;i<n;i++){
        dp[i][0]=dp[i-1][1]+arr[i];
        dp[i][1]=max(dp[i-2][0],dp[i-2][1])+arr[i];
    }
    cout << max(dp[n-1][0],dp[n-1][1]);
    return 0;
}