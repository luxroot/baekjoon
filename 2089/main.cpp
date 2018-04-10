#include <iostream>

using namespace std;

void minus2(int a){
    if(a == 0)
        return;
    if(a%-2 == 0){
        minus2(a/-2);
        cout << '0';
    }
    else{
        minus2((a-1)/-2);
        cout << '1';
    }
}

int main()
{
    int a;
    cin >> a;
    if(a==0){
        cout << 0;
        return 0;
    }
    minus2(a);
    return 0;
}