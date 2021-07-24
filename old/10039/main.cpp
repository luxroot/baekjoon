#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int result=0,i,tmp;
    for(i=0;i<5;i++){
        cin >> tmp;
        result+=max(tmp,40);
    }
    cout << result/5;
    return 0;
}