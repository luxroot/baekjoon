#include <iostream>

using namespace std;

int main()
{
    int n,i,max=-1000000,min=1000000,tmp;
    ios::sync_with_stdio(false);
    cin >> n;
    for(i=0;i<n;i++){
        cin >> tmp;
        if(min > tmp)min=tmp;
        if(max < tmp)max=tmp;
    }
    cout << min << ' ' << max ;
    return 0;
}