#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,i,ca=0,cb=0;
    string inp;
    cin >> n;
    cin >> inp;
    for(i=0;i<n;i++){
        if(inp[i]=='A')ca++;
        else cb++;
    }
    if(ca==cb){
        cout <<"Tie";
        return 0;
    }
    cout << (ca > cb? "A" : "B");
    return 0;
}