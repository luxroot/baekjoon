#include <iostream>
#include <string>

using namespace std;

bool map[64][64];

int isAll(int level, int x, int y){
    bool allz=true,allo,true;
    for(int i=x;i<x+(1<<level);i++){
        for(int j=y;j<y+(1<<level);j++){
            if(map[i][j]==true)
                allo=false;
            if(map[i][j]==false)
                allz=false;
        }       
    }
    if(allz) return 1;
    if(allo) return 0;
    return -1;
}

int main()
{
    int n,i,j;
    cin >> n;
    for(i=0;i<n;i++) {
        string tmp;
        cin >> tmp;
        for(j=0;j<n;j++)
            map[i][j]=tmp[j]-'0';
    }
    cout << isAll(2,0,0) << endl;
    cout << isAll(2,0,4) << endl;
    cout << isAll(2,4,0) << endl;
    cout << isAll(2,4,4) << endl;
    return 0;
}