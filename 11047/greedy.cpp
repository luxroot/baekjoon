#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i, n, change,result=0;
    cin >> n >> change;
    vector<int> curr;
    curr.reserve(n);
    
    for(i=0;i<n;i++)
        cin >> curr[n-1-i];
    
    for (i=0;i<n;i++){
        result += change/curr[i];
        change -= (change/curr[i])*curr[i];
    }
    cout << result;
    return 0;
}