#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr;
int n,i,m,tmp,idx;

int main(){
    scanf("%d", &n);
    arr.reserve(n);
    while(n--){
        scanf("%d", &tmp);
        arr.push_back(tmp);
    }
    sort(arr.begin(),arr.end());
    scanf("%d", &m);
    while(m--){
        scanf("%d", &tmp);
        pair< vector<int>::iterator, vector<int>::iterator > iterpair;
        iterpair = equal_range(arr.begin(), arr.end(), tmp);
        printf("%d ", (int)distance(iterpair.first, iterpair.second));
    }
    return 0;
}