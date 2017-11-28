#include <iostream>

using namespace std;

int main()
{
    int n,l,i;
    cin >> n >> l;
    i=l;
    for(;;i++){
        if(i > 100 || (n-(i*(i-1)/2)) < 0){
            cout << -1 << endl;
            exit(0);
        }
        
        if( (n-(i*(i-1)/2)) % i == 0)
            break;
    }
    int start = (n-(i*(i-1)/2)) / i;
    for(int k=0;k<i;k++)
        cout << start+k << " ";
    return 0;
}