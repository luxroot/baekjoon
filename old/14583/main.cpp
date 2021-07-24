#include <iostream>
#include <cmath>

#define PI 3.14159265

using namespace std;

int main()
{
    double h,w;
    cin >> w >> h;
    cout << fixed;
    cout.precision(2);
    cout << w/(cos(atan(h/w)/2)*2) << ' ';
    cout << cos(atan(h/w)/2)*(h-w*tan(atan(h/w)/2));
    return 0;
}