#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,tmp;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> m;
        int sum=0;
        for(j=0;j<m;j++){
            cin >> tmp;
            sum += tmp;
        }
        cout << sum;
    }
    return 0;
}