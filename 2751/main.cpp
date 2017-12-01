#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, temp, i;
    cin >> n;
    vector<int> arr;
    arr.reserve(n);
    for(i=0;i<n;i++){
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    for(i=0;i<n;i++)
        cout << arr[i] << endl;
    return 0;
}