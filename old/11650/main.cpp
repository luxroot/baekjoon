#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,i;
    cin >> n;
    vector< pair<int, int> > arr;
    for(i=0;i<n;i++){
        int tmp1,tmp2;
        cin >> tmp1 >> tmp2;
        arr.push_back(make_pair(tmp1,tmp2));
    }
    sort(arr.begin(),arr.end());
    for(i=0;i<n;i++)
        cout << arr[i].first << " " << arr[i].second << '\n';
    return 0;
}