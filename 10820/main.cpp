#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string inp;
    int cnt[4];
    while(getline(cin,inp)){
        memset(cnt,0,sizeof(cnt));
        for(char a : inp){
            if(a>='a' && a<='z') cnt[0]++;
            else if(a>='A' && a<='Z') cnt[1]++;
            else if(a>='0' && a<='9') cnt[2]++;
            else if(a==' ')cnt[3]++;
        }
        for(int i=0;i<4;i++){
            cout << cnt[i] << ' ';
        }
        cout << endl;
    }
}