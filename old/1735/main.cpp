#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d;
    e=a*d/__gcd(b,d)+b*c/__gcd(b,d);
    f=b*d/__gcd(b,d);
    cout << e/__gcd(e,f) << ' ' << f/__gcd(e,f);
    return 0;
}