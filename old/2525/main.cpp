#include <iostream>

using namespace std;

int main()
{
    int h,m,addm;
    cin >> h >> m >> addm;
    m+=addm;
    h+=m/60;
    m%=60;
    h%=24;
    cout << h << ' ' << m ;
    return 0;
}