#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,i;
    cin >> n;
    if(n<100){
        cout << n;
        exit(0);
    }
    int cnt=99,a,b,c;
    for (i=100;i<=n;i++){
        a=i/100;
        b=(i/10)%10;
        c=i%10;
        if(a-b == b-c)
            cnt++;
    }
    cout << cnt;
    return 0;
}