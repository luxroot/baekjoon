#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string a, string b)
{
    if (a.size() == b.size())
        return a < b;
    else
        return a.size() < b.size();
}

int main()
{
    int n,i,j;
    bool flag;
    string temp;
    cin >> n;
    vector<string> arr;
    arr.reserve(n+2);
    for(i=0;i<n;i++){
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end(),cmp);
    for(i=0;i<arr.size();i++){
        if(i!=arr.size()-1 && arr[i] != arr[i+1])
            printf("%s\n",arr[i].c_str());
        if(i==arr.size()-1)
            printf("%s\n",arr[i].c_str());
    }
    return 0;
}