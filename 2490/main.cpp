#include <iostream>

using namespace std;

int main()
{
    int i,a,b,c,d;
    for(i=0;i<3;i++){
        cin >> a >> b >> c >> d;
        int sum=a+b+c+d;
        if(sum==1) cout << 'C';
        else if(sum==2) cout << 'B';
        else if(sum==3) cout << 'A';
        else if(sum==4) cout << 'E';
        else if(sum==0) cout << 'D';
    }
    return 0;
}