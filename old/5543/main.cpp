#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    cout << min(min(a,b),c) + min(d,e) - 50 ;
    return 0;
}