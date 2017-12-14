#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    cin >> n;
    for(i=0;i<2*n;i++){
        for(j=0;j<n;j++){
            if((j+i)%2==0)
                cout<<"*";
            else
                cout <<" ";
        }
        cout<<"\n";
    }
    return 0;
}