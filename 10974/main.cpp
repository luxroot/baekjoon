#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int i;
    int n;
    vector<int> arr;
    cin >> n;
    for(i=0;i<n;i++){
        arr.push_back(i+1);
    }
    do{
        for(auto it : arr){
            cout << it << ' ';
        }
        cout << '\n';
    }while(next_permutation(arr.begin(), arr.end()));
    return 0;
}