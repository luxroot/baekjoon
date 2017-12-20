#include <iostream>
#include <string>
#include <vector>

using namespace std;

string goUp(string pass){
    for(int i=0;i<pass.size();i++){
        pass[i]++;
        if(pass[i]=='{') pass[i]='a';
    }
    return pass;
}


int main()
{
    string passwd,tmp;
    vector<string> dict;
    int i,j,n;
    cin >> passwd >> n;
    for(i=0;i<n;i++){
        cin >> tmp;
        dict.push_back(tmp);
    }
    for(i=0;i<26;i++){
        for(j=0;j<dict.size();j++){
            if(passwd.find(dict[j]) != string::npos){
                cout << passwd;
                goto BP;
            }
        }
        passwd=goUp(passwd);
    }
BP:
    return 0;
}