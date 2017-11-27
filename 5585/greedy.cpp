#include <iostream>

using namespace std;

int main()
{
    int change, curr[6]={500,100,50,10,5,1},result=0;
    cin >> change;
    change = 1000-change;
    for (int i=0;i<6;i++){
        result += change/curr[i];
        change -= (change/curr[i])*curr[i];
    }
    cout << result;
    return 0;
}