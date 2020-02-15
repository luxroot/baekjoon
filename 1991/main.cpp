#include <iostream>
#include <utility>

#define NO_CHILD ('.'-'A')

using namespace std;

pair<int,int> children[27];

void preorder(int cur){
    cout << (char)('A'+cur);
    if(children[cur].first != NO_CHILD) preorder(children[cur].first);
    if(children[cur].second != NO_CHILD) preorder(children[cur].second);
}

void inorder(int cur){
    if(children[cur].first != NO_CHILD) inorder(children[cur].first);
    cout << (char)('A'+cur);
    if(children[cur].second != NO_CHILD) inorder(children[cur].second);
}

void postorder(int cur){
    if(children[cur].first != NO_CHILD) postorder(children[cur].first);
    if(children[cur].second != NO_CHILD) postorder(children[cur].second);
    cout << (char)('A'+cur);
}

int main()
{
    int n,i;
    char a,b,c;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a >> b >> c;
        children[a-'A']={b-'A',c-'A'};
    }
    
    preorder(0);
    cout << '\n';
    inorder(0);
    cout << '\n';
    postorder(0);

    return 0;
}