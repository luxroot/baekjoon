#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, temp, i, j;
    int arr[10010];
    cin >> n;
    memset(arr,0,sizeof(arr));
    
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        arr[temp]++;
    }
    
    for(i=0;i<=10000;i++){
        if (arr[i] != 0){
            for(j=0;j<arr[i];j++)
                printf("%d\n",i);
        }
    }
    return 0;
}