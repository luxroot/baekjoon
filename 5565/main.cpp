#include <iostream>

using namespace std;

int main(){
    int sum=0,price,tmp,i;
    cin >> price;
    for(i=0;i<9;i++){
        cin >> tmp;
        sum+=tmp;
    }
    cout << price-sum;
    return 0;
}