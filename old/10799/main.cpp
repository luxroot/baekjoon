#include <iostream>
#include <string>

using namespace std;

int main(){
    string inp;
    char cur,before='a';
    int sum=0,cnt=0;
    cin >> inp;
    for(int i=0;i<inp.size();i++){
        cur = inp[i];
        if(cur == ')'){
            cnt --;
            if(before=='('){
                // cout << "레이저 피용 " << cnt << endl;
                sum+=cnt;
            }
            else
                sum++;
        }
        else
            cnt++;
        before=cur;
    }
    cout << sum;
}