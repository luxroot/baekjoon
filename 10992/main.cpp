#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    cin >> n;
    if(n==1){
        cout << '*';
        exit(0);
    }
    for(i=0;i<n-1;i++)cout << ' ';
    cout<<"*\n";
    for(i=0;i<n-2;i++){
        for(j=0;j<n-i-2;j++)cout << ' ';
        cout <<'*';
        for(j=0;j<(i+1)*2-1;j++)cout << ' ';
        cout <<"*\n";
    }
    for(i=0;i<2*n-1;i++)cout << '*';
    return 0;
}