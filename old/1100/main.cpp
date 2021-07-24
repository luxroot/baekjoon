#include <iostream>

using namespace std;

int main()
{
    char map[9][9];
    int i, j, cnt=0;
    for( i=0;i<8; i++)
        cin >> map[i];
    
    for( i=0;i<8; i++)
        for(j=0; j<8; j++)
            if((i+j)%2 ==0 && map[i][j] == 'F')
                cnt++;
    
    cout << cnt;
}