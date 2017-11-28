#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    long long fib[42];
    fib[0] = 0;
    fib[1] = 1;
    for(int i=2; i<=41; i++)
        fib[i] = fib[i-1] + fib[i-2];
    cin >> n;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        if(m==0)
            cout <<"1 0\n";
        else if(m==1)
            cout << "0 1\n";
        else
            cout << fib[m-1] << " " << fib[m]<< endl;
    }
}