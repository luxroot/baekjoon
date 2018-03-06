#include <iostream>

using namespace std;

int main()
{
    int i,n,v,e;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> v >> e;
        cout << e-v+2 << endl;
    }
    return 0;
}