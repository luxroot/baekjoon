#include <iostream>

using namespace std;

int func(int K){
    int Dp[31] = {};
    int result[31] = {};
    Dp[0] = 1;    result[0] = 1;
    Dp[2] = 3;
    for (int i = 4; i <= 30; i += 2)
        Dp[i] = 2;
 
    for (int i = 2; i <= K; i+=2){
        for (int j = 2; j <= i; j += 2){
            result[i] += Dp[j] * result[i - j];
 
        }
    }
 
    return result[K];
}

int main(){
    int n,i,j,dp[40]={0,};
    cin>>n;
    if(n%2==1){
        cout << 0;
        return 0;
    }
    n/=2;
    dp[0]=1;
    dp[1]=3;
    for(i=2;i<=n;i++){
        dp[i]=dp[i-1]*3;
        for(j=0;j<i-1;j++){
            dp[i]+=dp[j]*2;
        }
    }
    cout << dp[n];
    return 0;
}