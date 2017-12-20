#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,tmp;
    vector<int> dp;
    cin >> n;
    dp.push_back(0);
    dp.push_back(1);
    dp.push_back(2);
    dp.push_back(4);
    for(i=4;i<12;i++)
        dp.push_back(dp[i-1]+dp[i-2]+dp[i-3]);
    for(i=0;i<n;i++){
        cin >> tmp;
        cout << dp[tmp] << endl;
    }
}