#include <bits/stdc++.h>

using namespace std;

int main(){
    int dp[1010][10]={0,};
    int i,j,n,k,sum=0;
    cin>>n;
    for(i=0;i<10;i++){
        dp[1][i]=1;
    }
    for(i=2;i<=n;i++){
        for(j=0;j<10;j++){
            for(k=0;k<=j;k++){
                dp[i][j]+=dp[i-1][k];
                dp[i][j]%=10007;
            }
        }
    }
    for(i=0;i<10;i++){
        sum+=dp[n][i];
        sum%=10007;
    }
    cout << sum;
    return 0;
}