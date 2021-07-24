#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int n,s,i,j,sum,cnt=0;
    cin >> n >> s;
    vector<int> arr;
    arr.reserve(n);
    for(i=0;i<n;i++)
        cin >> arr[i];
    for(i=1;i<pow(2,n);i++){
        sum=0;
        for(j=0;j<n;j++)
            if(((i) & (1<<j)))
                sum+=arr[j];
        if(sum == s)
            cnt++;
    }
    cout << cnt;
    return 0;
}