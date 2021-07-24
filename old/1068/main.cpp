#include <iostream>
#include <vector>

using namespace std;

int parent[60],n,cnt,m;
vector<int> desc[60];

void dfs(int curr){
    if(desc[curr].size() == 0){
        cnt++;
        return;
    }
    for(int i : desc[curr]){
        dfs(i);
    }
}

int main(){
    ios::sync_with_stdio(false);
    int i,tmp,root;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> tmp;
        parent[i] = tmp;
        if(tmp != -1){
            desc[tmp].push_back(i);
        }
        else
            root = i;
    }
    cin >> m;
    if(m==root){
        cout << 0;
        return 0;
    }
    for(i=0;i<n;i++){
        if(parent[m] == i){
            for(vector<int>::size_type j=0;j<desc[i].size();j++){
                if(desc[i][j] == m){
                    desc[i].erase(desc[i].begin() + j);
                    break;
                }
            }
        }
    }
    dfs(root);
    cout << cnt;
    return 0;
}