#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, temp, i;
    vector<int> arr;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> temp;
        arr.push_back(temp);
    }
    if( prev_permutation(arr.begin(), arr.end() )){
        for(auto it : arr){
            cout << it << ' ';
        }
    }
    else{
        cout << -1;
    }
    return 0;
}