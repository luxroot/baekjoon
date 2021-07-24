#include <bits/stdc++.h>

using namespace std;

int main(){
    int cur=1;
    int ans=0;
    int a=0, b=0;
    char before;
    bool cont;
    string input;

    cin >> input;

    for(auto it : input){
        switch(it){
            case '(':
            a++;
            cur *=2;
            cont=false;
            break;
            case '[':
            b++;
            cur *=3;
            cont=false;
            break;
            case ')':
            a--;
            if(before=='(' && !cont){
                // cout << cur << endl;
                ans+=cur;
            }
            if(a<0){
                cout << 0;
                return 0;
            }
            cur/=2;
            break;
            case ']':
            b--;
            if(before=='[' && !cont){
                // cout << cur << endl;
                ans+=cur;
            }
            if(b<0){
                cout << 0;
                return 0;
            }
            cur/=3;
        }
        if(a<0 || b<0){
            cout << 0;
            return 0;
        }
        before=it;
    }
    if(a==b)
        cout << ans;
    else
        cout << 0;
    return 0;
}
