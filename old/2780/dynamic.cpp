#include <bits/stdc++.h>

using namespace std;

int arr[1010][10];

int main()
{
    int n,m,i;
    cin >> n;
    for(i=0;i<10;i++)
        arr[0][i]=1;
    for(i=1;i<=1005;i++){
        arr[i][0]=(arr[i-1][7])%1234567;
        arr[i][1]=(arr[i-1][2]+arr[i-1][4])%1234567;
        arr[i][2]=(arr[i-1][1]+arr[i-1][3]+arr[i-1][5])%1234567;
        arr[i][3]=(arr[i-1][2]+arr[i-1][6])%1234567;
        arr[i][4]=(arr[i-1][1]+arr[i-1][5]+arr[i-1][7])%1234567;
        arr[i][5]=(arr[i-1][2]+arr[i-1][4]+arr[i-1][6]+arr[i-1][8])%1234567;
        arr[i][6]=(arr[i-1][3]+arr[i-1][5]+arr[i-1][9])%1234567;
        arr[i][7]=(arr[i-1][4]+arr[i-1][0]+arr[i-1][8])%1234567;
        arr[i][8]=(arr[i-1][5]+arr[i-1][7]+arr[i-1][9])%1234567;
        arr[i][9]=(arr[i-1][6]+arr[i-1][8])%1234567;
    }
    for(i=0;i<n;i++){
        cin>>m;
        int cnt=0,j;
        for(j=0;j<10;j++){
            cnt+=arr[m-1][j];
            cnt%=1234567;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}