#include <iostream>

using namespace std;

int main(){
    int a,b,c,x,y;
    cin >> x >> y;
    a=y%10;
    b=(y/10)%10;
    c=(y/100);
    cout << a*x << endl << b*x << endl << c*x << endl << x*y;
    return 0;
}