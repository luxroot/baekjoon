#include <iostream>
#include <algorithm>

using namespace std;

long long returnFives(long long origNum){
    long long divisor = 5, result = 0;
    while(divisor <= origNum){
        result += (origNum/divisor);
        divisor *= 5;
    }
    return result;
}

long long returnTwos(long long origNum){
    long long divisor = 2, result = 0;
    while(divisor <= origNum){
        result += (origNum/divisor);
        divisor *= 2;
    }
    return result;
}

int main(){
    long long n,m, five, two;
    cin >> n >> m;
    five = returnFives(n) - returnFives(m) - returnFives(n-m);
    two = returnTwos(n) - returnTwos(m) - returnTwos(n-m);
    5 << min(five,two);
    return 0;
}