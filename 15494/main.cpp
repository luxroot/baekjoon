#include <iostream>

using namespace std;

int main()
{
    int i,a,b;
    cin >> a;
    a=a/364;
    if(a>100){
        cout << a-3*(a-99)/3 << endl << (a-98)/3;
        return 0;
    }
    a-=3;
    cout << a << endl << 1;
    return 0;
}