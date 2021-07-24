#include <iostream>
#include <string>

using namespace std;

int main()
{
    string key,msg;
    getline(cin,msg);
    getline(cin,key);
    for(int i=0;i<msg.size();i++){
        if(msg[i]==' '){
            printf(" ");
            continue;
        }
        int tmp=msg[i]-'a';
        tmp= (tmp-(key[i%key.size()]-'a'))%26;
        if(tmp<=0)tmp+=26;
        printf("%c",tmp+'a'-1);
    }
    return 0;
}