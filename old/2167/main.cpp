#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,k,sx,sy,ex,ey,arr[310][310];
    cin >> n >> m;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin >> arr[i][j];
    cin >> k;
    for(int tmp=0;tmp<k;tmp++){
        cin >> sx >> sy >> ex >> ey;
        int sum=0;
        for(i=sx-1;i<ex;i++)
            for(j=sy-1;j<ey;j++)
                sum+=arr[i][j];
        cout << sum << '\n';
    }
    return 0;
}