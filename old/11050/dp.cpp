#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n,k, i,j;
    long pas[32][32];
    
    cin >> n >> k;
    memset(pas,sizeof(pas),0);
    for(i=0;i<32;i++)
        pas[i][0]=1;
    for(i=1;i<32;i++)
        for(j=1;j<=i;j++)
            pas[i][j]=pas[i-1][j-1]+pas[i-1][j];
    cout << pas[n][k];
    return 0;
}