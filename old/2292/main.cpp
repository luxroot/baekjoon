#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    cin >> n;
    j=1;
    for(i=1;;i++){
        if(n<=j)
            break;
        j+=6*i;
    }
    cout << i;
    return 0;
}