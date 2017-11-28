#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    int n, i;
    string inp;
    regex reg("((100+1+)|(01))+");
    smatch m;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> inp;
        if(regex_match(inp,m,reg))
            cout << "YES" << endl;
        else
            cout <<"NO" << endl;
    }
}