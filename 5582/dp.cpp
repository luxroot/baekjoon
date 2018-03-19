#include <iostream>
#include <string>
#include <cstring>


int dp[4010][4010];

using namespace std;

int main()
{
    int i,j,max=0;
    string a,b;
    cin >> a >> b;
    for(i=1;i<=a.size();i++){
        for(j=1;j<=b.size();j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
                if(dp[i][j] > max) max=dp[i][j];
            }
        }
    }
    cout << max;
    return 0;
}