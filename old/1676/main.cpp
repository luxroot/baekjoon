#include <iostream>

using namespace std;

int getPowerOfFive(int a){
    int cnt=0;
    while( !(a%5) ){
        a/=5;
        cnt++;
    }
    return cnt;
}

int main(){
    int n,result=0;
    cin >> n;
    for(int i =1;i<=n;i++){
        result += getPowerOfFive(i);
    }
    cout << result << endl;
    return 0;
}