#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, i;
    vector<int> arr;
    cin >> n;
    arr.reserve(n+1);
    arr[1]=0;
    for (i=2;i<=n;i++){
        if(i%3 == 0)
            arr[i] = min(arr[i/3], arr[i-1])+1;
        else if(i%2 ==0)
            arr[i] = min(arr[i/2], arr[i-1])+1;
        else
            arr[i] = arr[i-1]+1;
    }
    cout << arr[n];
    return 0;
}
