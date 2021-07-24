#include <iostream>
#include <string>
#include <bitset>

using namespace std;

bool map[64][64];

int isAll(int level, int x, int y){
    bool allz=true,allo=true;
    for(int i=x;i<x+(1<<level);i++){
        for(int j=y;j<y+(1<<level);j++){
            if(map[i][j]==true)
                allo=false;
            if(map[i][j]==false)
                allz=false;
        }
    }
    printf("\nisAll CALLED l:%d x:%d y:%d z:%d o:%d\n",level,x,y,allz,allo);
    if(allz) return 1;
    if(allo) return 0;
    return -1;
}

void dnc(int level, int sx, int sy)
{
    int i;
    bool x,y;
    // printf("\ndnc CALLED l : %d sx : %d sy : %d\n",level,sx,sy);
    if(level==0){
        int returnValue=isAll(1,sx,sy);
        if(returnValue==1)   printf("1");
        else if(returnValue==0)  printf("0");
        else printf("(%d%d%d%d)",map[sx][sy],map[sx][sy+1],map[sx+1][sy],map[sx+1][sy+1]);
        return;
    }
    printf("(");
    for(i=0;i<4;i++){
        x=i&2;
        y=i&1;
        int returnValue=isAll(level,sx+x*(1<<level),sy+y*(1<<level));
        if(returnValue==1)   printf("1");
        else if(returnValue==0)  printf("0");
        else dnc(level-1,sx+x*(1<<(level)),sy+y*(1<<(level)));
    }
    printf(")");
}

int main()
{
    int n,i=1,j,level=-1;
    cin >> n;
    if(n==1){
        cin>>i;
        cout <<'('<< i<<')';
        return 0;
    }
    while(i!=n){
        i*=2;
        level++;
    }
    for(i=0;i<n;i++) {
        string tmp;
        cin >> tmp;
        for(j=0;j<n;j++)
            map[i][j]=tmp[j]-'0';
    }
    dnc(level,0,0);
    return 0;
}