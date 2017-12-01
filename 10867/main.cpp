#include <iostream>

using namespace std;
bool arr[200100];

int main(){
    int n,i,temp;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> temp;
        arr[temp+100000]=true;
    }
    for(i=0;i<200010;i++)
        if(arr[i])
            printf("%d ",i-100000);
    return 0;
}