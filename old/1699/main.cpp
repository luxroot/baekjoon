#include<iostream>
#include<climits>
#include<cstring>

using namespace std;

int main()
{
    int i,j,n;
    int arr[100010];

    cin >> n;
    for(i=1;i<=n;i++)arr[i]=INT_MAX;
    arr[0]=0;

    for(i=1;i<=n;i++){
        for(j=1;i >= j*j ;j++){
            arr[i]=min(arr[i],arr[i-j*j]+1);
        }
    }

    cout << arr[n];
    return 0;
}