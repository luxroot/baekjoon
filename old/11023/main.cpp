#include <iostream>

using namespace std;

int main(){
    int n, sum=0;

    while(scanf("%d",&n) == 1){
        sum+=n;
    }
    cout << sum;
    return 0;
}