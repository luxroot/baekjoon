#include <iostream>

using namespace std;

int main()
{
    int i,n,tmp,sum=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> tmp;
        sum+=tmp;
    }
    sum-=(n-1);
    cout << sum;
    return 0;
}