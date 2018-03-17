#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int,string> a, pair<int,string> b){
    return a.first < b.first;
}

int main()
{
    int n,i,age;
    string name;
    vector< pair<int, string> > arr;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> age >> name;
        arr.push_back(make_pair(age,name));
    }
    stable_sort(arr.begin(),arr.end(),cmp);
    for(i=0;i<n;i++){
        printf("%d %s\n",arr[i].first,arr[i].second.c_str());
    }
    return 0;

}