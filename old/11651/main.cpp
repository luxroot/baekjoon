#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
    int n,i,x,y;
    vector<pair <int, int> > arr;
    cin >> n;
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        arr.push_back(make_pair(y, x));
    }
    sort(arr.begin(), arr.end());
    for(i=0;i<n;i++){
        printf("%d %d\n",arr[i].second, arr[i].first);
    }
    return 0;
}