#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    cin >> n;
    j=0;
    for(i=1;;i++){
        j+=i;
        if(j>=n){
            cout << ( i%2 ? (i+1)-(n-(j-i)) : n-(j-i) ) << '/' << (i+1)-( i%2 ? (i+1)-(n-(j-i)) : n-(j-i) ) << endl;
            exit(0);
        }
    }
}