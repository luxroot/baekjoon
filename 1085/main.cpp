#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[4],x,y;
    cin >> arr[0] >> arr[1] >> x >> y;
    arr[2]=x-arr[0];
    arr[3]=y-arr[1];
    sort(arr,arr+4);
    cout << arr[0];
    return 0;
}