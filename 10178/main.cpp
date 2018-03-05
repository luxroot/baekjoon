#include <iostream>

using namespace std;

int main()
{
    int n,a,b,i;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a >> b;
        printf("You get %d piece(s) and your dad gets %d piece(s).\n",a/b,a%b);
    }
    return 0;
}
