#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int stair[310];
    int dp[310][2]={0,};
    int n,i;
    ios::sync_with_stdio(false);
    cin>>n;
    for(i=0;i<n;i++){
        cin >> stair[i];
    }
    dp[0][0]=stair[0];
    dp[1][0]=stair[1];
    dp[1][1]=stair[0]+stair[1];
    dp[2][0]=stair[0]+stair[2];
    dp[2][1]=stair[1]+stair[2];
    for(i=3;i<n;i++){
        dp[i][0]=max(dp[i-2][0],dp[i-2][1])+stair[i];
        dp[i][1]=dp[i-1][0]+stair[i];
    }
    // for(i=0;i<n;i++){
    //     cout << i << ' ' << dp[i][0] << ' ' <<dp[i][1]<<endl;
    // }
    cout << (max(dp[n-1][0],dp[n-1][1]));
    return 0;

}