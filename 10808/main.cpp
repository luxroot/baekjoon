#include <iostream>
#include <string>

using namespace std;

int count[27];

int main(){
    string inp;
    cin >> inp;
    int i;
    for(i=0;i<inp.size();i++)
        count[inp[i]-'a']++;
    for(i=0;i<26;i++){
        cout << count[i] << ' ';
    }
    return 0;
}