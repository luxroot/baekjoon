#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string inp;
    int i;
    vector<string> arr;
    cin >> inp;
    for(i=0;i<inp.size();i++)
        arr.push_back(inp.substr(i));
    sort(arr.begin(),arr.end());
    for(i=0;i<inp.size();i++)
        cout << arr[i] << endl;
    return 0;
}