#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n,m,i,x,y,z;
    vector<int> arr;
    cin >> n >> m;
    for(i=0;i<n;i++){
        arr.push_back(i+1);
    }
    for(i=0;i<m;i++){
        cin >> x >> z >> y;
        rotate(arr.begin()+x-1, arr.begin()+y-1, arr.begin()+z);
    }
    for(i=0;i<n;i++)
        cout << arr[i] << ' ';
    return 0;
}