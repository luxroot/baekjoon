#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    cin >> n;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++) cout <<'*';
        for(j=0;j<2*(n-i);j++) cout << ' ';
        for(j=0;j<i;j++) cout <<'*';
        cout<<endl;
    }

    for(;i>0;i--){
        for(j=0;j<i;j++) cout <<'*';
        for(j=0;j<2*(n-i);j++) cout << ' ';
        for(j=0;j<i;j++) cout <<'*';
        cout<<endl;
    }
    return 0;
}