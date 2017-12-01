#include <iostream>

using namespace std;
bool arr[100100];

int main(){
    int n,i,temp;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> temp;
        arr[temp]=true;
    }
    for(i=0;i<100000;i++)
        if(arr[i])
            printf("%d ",i);
    return 0;
}