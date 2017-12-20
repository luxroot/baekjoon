#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,tmp,result=0;
    vector<int> arr;

    cin >> n;
    for(i=0;i<n;i++){
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(),arr.end());
    for(i=0;i<n;i++)
        result += arr[i]*(n-i);
    cout << result;
    return 0;
}