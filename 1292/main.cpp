#include <iostream>

using namespace std;

int main()
{
    int a,b,i,j,sum=0,idx=0;
    cin >> a >> b;
    for(i=1;true;i++){
        for(j=1;j<=i;j++){
            idx++;
            if(idx>=a && idx <=b)
                sum+=i;
            if(idx>b){
                cout << sum;
                exit(0);
            }
        }
    }
    return 0;
}