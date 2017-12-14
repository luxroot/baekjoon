#include <iostream>

using namespace std;

int main()
{
    int i,arr[10];
    bool asc=true,dec=true;
    for(i=0;i<8;i++)
        cin >> arr[i];
    for(i=0;i<7;i++){
        if(arr[i]>arr[i+1]) asc=false;
        if(arr[i]<arr[i+1]) dec=false;
    }
    if(asc)
        cout << "ascending";
    else if(dec)
        cout << "descending";
    else
        cout << "mixed";
    return 0;
}