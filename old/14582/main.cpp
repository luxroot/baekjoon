#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a,b;
    int i,tmp;
    bool flag=false,win=false;
    for(i=0;i<9;i++){
        cin >> tmp;
        a.empty()? a.push_back(tmp) : a.push_back(tmp+a.back());
    }
    for(i=0;i<9;i++){
        cin >> tmp;
        b.empty()? b.push_back(tmp) : b.push_back(tmp+b.back());
    }
    if(a[0]) flag=true;
    for(i=1;i<9;i++){
        if(a[i] > b[i-1]) flag=true;
    }
    if(flag) cout << "Yes";
    else cout << "No";
    return 0;
}