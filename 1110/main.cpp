#include <iostream>

using namespace std;

int getNextNum(int a){
    int b=a/10, c=a%10;
    return (a%10)*10 + (b+c)%10;
}

int main()
{
    int n,m,cnt=0;
    cin >> n;
    m=n;
    while(true){
        m=getNextNum(m);
        cnt++;
        if(m==n)
            break;
    }
    cout << cnt;
    return 0;
}