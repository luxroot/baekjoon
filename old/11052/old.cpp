#include <iostream>

using namespace std;

int main()
{
    int n,i,j,arr[1010],dp[1010]={0};
    cin >> n;
    arr[0]=0;
    for(i=0;i<n;i++){
        cin >> arr[i+1];
        dp[i]=0;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            dp[i]=max(dp[i],dp[i-j]+arr[j]);
        }
    }
    // for(i=1;i<=n;i++)
    //     cout << i << ' ' << dp[i] << endl;
    cout << dp[n];
    return 0;
}