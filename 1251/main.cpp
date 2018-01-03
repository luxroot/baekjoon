#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    string a,b,c,d;
    vector<string> arr;
    cin >> a;
    for(i=1;i<a.size()-1;i++){
        for(j=i+1;j<a.size();j++){
            b = a.substr(0,i);
            reverse(b.begin(),b.end());
            c = a.substr(i,j-i);
            reverse(c.begin(),c.end());
            d = a.substr(j);
            reverse(d.begin(),d.end());
            arr.push_back(b+c+d);
        }
    }
    sort(arr.begin(),arr.end());
    cout<<arr[0]<<endl;
    return 0;
}