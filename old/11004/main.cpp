#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,i,temp,k;
    scanf("%d %d", &n, &k);
    vector<int> arr;
    arr.reserve(n);
    for(i=0;i<n;i++){
        scanf("%d", &temp);
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    printf("%d", arr[k-1]);

}