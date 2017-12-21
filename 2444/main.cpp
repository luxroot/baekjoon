#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    cin >> n;
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++) cout << " ";
        for(j=0;j<2*i-1;j++) cout << "*";
        cout << '\n';
    }
    for(;i>0;i--){
        for(j=0;j<n-i;j++) cout << " ";
        for(j=0;j<2*i-1;j++) cout << "*";
        cout << '\n';
    }
    return 0;
}