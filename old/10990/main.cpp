#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++)cout << ' ';
        cout << '*';
        for(j=0;j<2*i-1;j++)cout << ' ';
        cout << (i==0 ? "\n" : "*\n");
    }
    return 0;
}