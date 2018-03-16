#include <iostream>

using namespace std;

int main()
{
    int i,n,j;
    long long arr[110];
    arr[0]=1;
    arr[1]=1;
    arr[2]=1;
    arr[3]=2;
    arr[4]=2;
    for(i=5;i<100;i++){
        arr[i]=arr[i-1]+arr[i-5];
    }
    cin >> n;
    for(i=0;i<n;i++){
        cin >> j;
        cout << arr[j-1] << endl;
    }
    return 0;
}