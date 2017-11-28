#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int n,max=INT_MIN,i;
    float sum=0;
    cin >> n;
    vector<int> arr;
    arr.reserve(n);
    for(i=0;i<n;i++){
        cin >> arr[i];
        if(max < arr[i])
            max = arr[i];
    }
    // cout << max;
    for(i=0;i<n;i++)
        sum += ((float)arr[i]/max)*100;
    printf("%0.2f",sum/n);
    return 0;
}