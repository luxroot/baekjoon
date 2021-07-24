#include <iostream>

using namespace std;

int main(){
    int n,k,i,j;
    int arr[110],dp[10010]={0};
    
    cin >> n >> k;
    
    for(i=0;i<n;i++){
        cin >> arr[i];
    }

    dp[0]=1;

    for(j=0;j<n;j++){
        for(i=1;i<=k;i++){
            if(arr[j]<=i){
                dp[i]+=dp[i-arr[j]];
            }
        }
    }

    cout << dp[k];

    return 0;
}