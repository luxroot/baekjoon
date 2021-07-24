#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int i,arr[7],tmp,min=101,sum=0;
    for(i=0;i<7;i++){
        cin >> tmp;
        if(tmp%2==1){
            sum+=tmp;
            if(min>tmp)
                min=tmp;
        }
    }
    if(sum==0){
        cout << -1;
        return 0;
    }
    cout << sum << endl << min;
    return 0;
}