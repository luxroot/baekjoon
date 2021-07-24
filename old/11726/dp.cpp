#include <iostream>

using namespace std;

int main()
{
    int n,i,arr[1010];
    arr[0]=1;
    arr[1]=1;
    cin >> n;
    for(i=2;i<=n;i++){
        arr[i]=(arr[i-1]+arr[i-2])%10007;
    }
    cout << arr[n];
    return 0;
}