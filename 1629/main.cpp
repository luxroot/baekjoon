#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    cout << a+b+c << endl;
    cout <<  bitset<32>(a+b+c) << endl;
    return 0;
}
