#include <iostream>

using namespace std;

int main()
{
    int max=-1,maxi,i,arr[10];
    for(i=0;i<9;i++){
        cin >> arr[i];
        if(arr[i] > max){
            max=arr[i];
            maxi=i+1;
        }
    }
    cout << max << endl << maxi;
    return 0;
}

