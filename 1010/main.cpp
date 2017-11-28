#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int t,n,m, i,j;
    long pas[32][32];
    cin >> t;
    memset(pas,sizeof(pas),0);
    for(i=0;i<32;i++)
        pas[i][0]=1;
    for(i=1;i<32;i++)
        for(j=1;j<=i;j++)
            pas[i][j]=pas[i-1][j-1]+pas[i-1][j];
            
    for(i=0;i<t;i++){
        cin >> n >> m;
        cout << pas[m][n] << endl;
    }
    return 0;
}