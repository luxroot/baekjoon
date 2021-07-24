#include <iostream>
#include <string>

using namespace std;

int main(){
    string inp;
    string temp;
    while(getline(cin,temp)){
        inp += temp;
    }
    cout << inp;
}