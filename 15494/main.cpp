#include <iostream>

using namespace std;

int main()
{
    int i,a,b=1;
    cin >> a;
    a=a/364-3;
    while(a>100){
        a-=3;
        b++;
    }
    cout << a << endl << b;
    return 0;
}