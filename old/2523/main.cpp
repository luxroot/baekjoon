#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    cin >> n;
    for(i=0;i<n-1;i++){
        for(j=0;j<i+1;j++)cout << '*';
        cout << endl;
    }
    for (;i>=0;i--){
        for(j=0;j<i+1;j++)cout << '*';
        cout << endl;
    }
    return 0;

}