#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int i,cnt=0;
    cin >> s;
    for(i=0;i<s.size();i++){
        if(s[i] == ',')
            cnt++;
    }
    cout << cnt+1;
    return 0;
}