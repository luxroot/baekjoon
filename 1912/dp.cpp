#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,i,j,result;
    vector<int> arr;
    vector<int> dp;
    
    cin >> n;
    arr.reserve(n);
    dp.reserve(n);
    for(i=0;i<n;i++)
        cin >> arr[i];
    
    dp[0]=arr[0];
    for(i=1;i<n;i++)
        dp[i] = max(dp[i-1]+arr[i], arr[i]);
    for(i=0;i<n;i++)
        result = max(result,dp[i]);
    cout << result;
    return 0;
}
