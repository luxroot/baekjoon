#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int tall[9],i, j, result=0;
    for( i=0; i<9; i++){
        cin >> tall[i];
        result += tall[i];
    }
    result -=100;
    for ( i=0;i<9;i++)
        for( j=i+1;j<9;j++)
            if(tall[i]+tall[j] == result)
                goto bp;
bp:
    tall[i] = 100;
    tall[j] = 100;
    sort(tall,tall+9);
    for(i=0;i<7;i++)
        cout << tall[i] << endl;
}