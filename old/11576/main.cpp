#include <iostream>
#include <stack>
#include <cmath>

using namespace std;



int main(){
    ios::sync_with_stdio(false);
    int i,a,b,tmp,m,num = 0;
    stack<int> st;

    cin >> a >> b >> m;
    for(i=0;i<m;i++){
        cin >> tmp;
        num += tmp*pow(a,m-i-1);
    }

    while(num != 0){
        st.push(num%b);
        num/=b;
    }
    while(!st.empty()){
        cout << st.top() << ' ';
        st.pop();
    }
    return 0;
}