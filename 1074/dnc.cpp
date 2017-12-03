#include <iostream>

#define p2(x) ( 1 << (x) )
#define p4(x) ( 1 << (2*(x)) )

using namespace std;

int find(int level, int x, int y, int index){
    int idx=0;
    if(y >= p2(level-1)) idx+=1,y-=p2(level-1);
    if(x >= p2(level-1)) idx+=2,x-=p2(level-1);
    // cout << "index : " << index;
    index += (idx * (p4(level-1)));
    // cout << "index : " << index;
    // cout << level << " " << x << " " << y << " " << idx << " " << index << endl;
    if(level==1)
        return index;
    else
        return find(level-1,x,y,index);
}

int main()
{
    int N,r,c;
    // cout << p4(0) << p4(1) << p4(2);
    cin >> N >> r >> c;
    cout << find(N,r,c,0);
    return 0;
}