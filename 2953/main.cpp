#include <iostream>

using namespace std;

int main()
{
    int i,j,max=-1,maxi,c,tmp;
    for(i=0;i<5;i++){
        c=0;
        for(j=0;j<4;j++){
            cin >> tmp;
            c+=tmp;
        }
        if(c>max){
            max=c;
            maxi=i+1;
        }
    }
    cout << maxi << ' '<<max;
    return 0;
}