#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    arr.assign(n+1,-1);
    arr[3] = 1;
    arr[5] = 1;
    for (int i =5; i<=n; i++){
        if(arr[i-3] != -1 || arr[i-5] != -1){
            if(arr[i-5] == -1)
                arr[i] = arr[i-3] +1;
            else if (arr[i-3] == -1)
                arr[i] = arr[i-5] +1;
            else
                arr[i] = min(arr[i-3], arr[i-5]) + 1;
        }
    }
    cout << arr[n];
    return 0;
}