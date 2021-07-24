#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int i,a,b,n;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a >> b;
        cout << (a*b)/__gcd(a,b) << '\n';
    }
    return 0;
}