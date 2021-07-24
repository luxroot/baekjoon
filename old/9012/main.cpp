#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n,i;
    vector<string> arr;
    string foo;
    cin >> n;
    for( i=0; i<n; i++){
        cin >> foo;
        arr.push_back(foo);
    }
    for (i=0;i<n;i++){
        int cnt=0, j;
        bool flag = false;
        for ( j=0; j<arr[i].size(); j++){
            if(arr[i].at(j) == '(')
                cnt++;
            else
                cnt--;
            if(cnt < 0)
                flag = true;
        }
        if(flag)
            cout <<"NO"<<endl;
        else{
            if (cnt == 0)
                cout <<"YES" << endl;
            else
                cout <<"NO"<<endl;
        }
    }
        
    
    return 0;
}