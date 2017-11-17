#include <iostream>
#include <string>
#include <stack>

using namespace std;

char bintooct(string str){
    int result = 0;
    if (str[0] == '1')
        result += 4;
    if (str[1] == '1')
        result += 2;
    if (str[2] == '1')
        result += 1;
    return '0' + result;
}

int main()
{
    string str;
    stack <char> st;
    int l, i;
    cin >> str;
    l = str.size();
    for (i = l-3; i >-1; i-=3)
        st.push(bintooct(str.substr(i,3)));
        
    if (i==-2){
        string temp;
        temp = "00";
        temp = temp+str.substr(0,1);
        st.push(bintooct(temp));
    }
    if (i==-1){
        string temp;
        temp = "0";
        temp = temp+str.substr(0,2);
        st.push(bintooct(temp));
    }
    bool flag=true;
    while(!st.empty())
    {
        if ( flag && st.top() == '0'){
            st.pop();
            continue;
        }
        else
            flag = false;
        cout << st.top();
        st.pop();
    }
    if(flag)
        cout <<'0';
    return 0;
}