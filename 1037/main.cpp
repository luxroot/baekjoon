#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int n,i, min=INT_MAX, max=INT_MIN;
    cin >> n;
    vector<int> arr;
    arr.reserve(n);
    for ( i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    cout << min * max << endl;
    
    return 0;
}