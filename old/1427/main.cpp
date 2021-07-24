#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string a;
    cin >> a;
    vector<char> b;
    for(int i=0;i<a.size();i++)
        b.push_back(a[i]);
    sort(b.begin(),b.end());
    for(int i=b.size()-1;i>-1;i--)
        cout << b[i];
    return 0;
}