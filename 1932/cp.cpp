#include <iostream>

using namespace std;

int main()
{
    int n,i,j,arr[510][510];
    cin >> n;
    
    for(i=0;i<n;i++)
        for(j=0;j<i+1;j++)
            cin >> arr[i][j];
    
}