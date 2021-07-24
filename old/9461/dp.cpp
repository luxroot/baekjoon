#include <iostream>

using namespace std;

int main(){
    int n,m,i;
    unsigned long long dp[110]={1,1,1,2,2};
    for(i=5;i<100;i++){
        dp[i]=dp[i-1]+dp[i-5];
    }
    cin >> n;
    while(n--){
        cin >> m;
        cout << dp[m-1] << endl;
    }

    return 0;
}