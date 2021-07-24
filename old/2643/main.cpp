#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main(){
    int n, tmp1, tmp2, i, j;
    vector< pair<int, int> > arr;
    cin >> n;
    vector< int > dp(n,1);
    for(i=0;i<n;i++){
        cin >> tmp1 >> tmp2;
        arr.push_back({min(tmp1,tmp2), max(tmp1,tmp2)});
    }
    sort(arr.begin(),arr.end());
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if((arr[i].first >= arr[j].first) && (arr[i].second >= arr[j].second)){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }
    cout << *max_element(dp.begin(),dp.end());
    return 0;
}