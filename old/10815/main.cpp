#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr;
int n,m,tmp;

int main(){
    ios::sync_with_stdio(false);
    cin >> n ;
    arr.reserve(n);
    while(n--){
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(),arr.end());
    cin >> m;
    while(m--){
        cin >> tmp;
        cout << binary_search(arr.begin(),arr.end(),tmp) << ' ';
    }
    return 0;
}