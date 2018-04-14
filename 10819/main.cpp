#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int i,n,tmp,sum,max = -900;
    vector<int> arr;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &tmp);
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    do {
        sum=0;
        for(i=0;i<n-1;i++)
            sum+= abs( arr[i+1] - arr[i] );
        if(sum > max) max = sum;
    } while(next_permutation(arr.begin(), arr.end()));
    printf("%d", max);
    return 0;
}