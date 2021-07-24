#include <iostream>
#include <string>

using namespace std;

int main(){
    string inp;
    getline(cin, inp);
    for(int i=0;i<inp.size();i++){
        if(inp[i] >= 'a' && inp[i] <= 'z'){
            printf("%c", (inp[i]-'a'+13)%26+'a');
        }
        else if(inp[i] >= 'A' && inp[i] <= 'Z'){
            printf("%c", (inp[i]-'A'+13)%26+'A');
        }
        else
            printf("%c", inp[i]);
    }
    return 0;
}