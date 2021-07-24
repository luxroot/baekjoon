#include <iostream>

using namespace std;

int main()
{
    int i,n,a,b;
    cin >> n;
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
    return 0;
}