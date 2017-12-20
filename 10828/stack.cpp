#include <bits/stdc++.h>

using namespace std;

int main()
{
    string cmd;
    int i,n,tmp;
    stack<int> st;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> cmd;
        if(cmd=="push"){
            cin >> tmp;
            st.push(tmp);
        }
        else if(cmd=="top"){
            if(st.empty())  cout<<-1<<endl;
            else    cout << st.top()<<endl;
        }
        else if(cmd=="size")
            cout << st.size() << endl;
        else if(cmd=="empty")
            cout << st.empty() << endl;
        else if(cmd=="pop"){
            if(st.empty()) cout <<-1 << endl;
            else cout << st.top()<<endl,st.pop();
        }
    }
    return 0;
}