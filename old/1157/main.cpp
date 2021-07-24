#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string inp;
    cin >> inp;
    int i,dic[26];
    memset(dic,0,sizeof(dic));
    for(i=0;i<inp.size();i++){
        if(inp[i]> 90)
            dic[inp[i]-'a']++;
        else
            dic[inp[i]-'A']++;
    }
    int max=-1;
    for(i=0;i<26;i++)
        if (dic[i] > max)
            max = dic[i];
    int flag = -1;
    for(i=0;i<26;i++){
        if(dic[i]==max){
            if(flag==-1){
                flag = i;
            }
            else{
                cout << "?";
                exit(0);
            }
        }
    }
    cout << char('A'+flag);
    
    return 0;
}