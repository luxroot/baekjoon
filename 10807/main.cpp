#include <iostream>

using namespace std;

int main()
{
    int i,n,m,arr[110],cnt=0;
    cin >> n;
    for(i=0;i<n;i++)
        cin >> arr[i];
    cin >> m;
    for(i=0;i<n;i++){
        if(arr[i] == m)
            cnt++;
    }
    cout << cnt;
    return 0;
}