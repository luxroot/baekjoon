#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int l,p,v,cnt=0;
    while(true)
    {
        cnt++;
        cin>>l>>p>>v;
        if(l==0 && p==0 && v==0)
            break;
        cout << "Case " << cnt <<": "<<(v/p)*l + min(l, v%p) <<endl;
    }
    return 0;
}