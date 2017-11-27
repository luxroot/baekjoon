#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main()
{
    int n,i,j,max = INT_MIN;
    vector<int> arr;
    cin >> n;
    arr.reserve(n);
    for(i=0;i<n;i++)
        cin >> arr[i];
    for(i=0;i<n;i++){
        int sum=arr[i];
        if (sum > max)
            max = sum;
        for(j=i+1;j<n;j++){
            sum+=arr[j];
            if (sum > max)
                max = sum;
        }
    }
    cout << max;
    return 0;
}