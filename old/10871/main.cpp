#include <iostream>

using namespace std;

int main()
{
    int n,x,i,temp;
    cin >> n >> x;
    for(i=0;i<n;i++){
        cin >> temp;
        if(temp < x)
            cout << temp << " ";
    }
    return 0;
}