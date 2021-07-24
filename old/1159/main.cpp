#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int cnt[30]={0};
    string tmp;
    bool flag=false;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> tmp;
        cnt[static_cast<int>(tmp[0]-'a')]++;
    }
    for(int i=0;i<26;i++){
        if(cnt[i] >= 5){
            cout << static_cast<char>('a' + i);
            flag = true;
        }
    }
    if(!flag)
        cout << "PREDAJA";
    return 0;
}