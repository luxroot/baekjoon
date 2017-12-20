#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v,e,i,cnt=0,c;
    bool adj[105][105];
    memset(adj,0,sizeof(adj));
    cin >> v >> e;
    for(i=0;i<e;i++){
        int a,b;
        cin >> a >> b;
        adj[a][b]=true;
        adj[a][b]=true;
    }
    queue<int> q;
    vector<bool> visited;
    visited.assign(v+3,false);
    q.push(1);
    while(!q.empty()){
        c=q.front();
        q.pop();
        visited[c]=true;
        for(i=1;i<=v;i++){
            if(adj[c][i] && !visited[i]){
                visited[i]=true;
                q.push(i);
            }
        }
    }
    for(i=1;i<=v;i++){
        if(visited[i]) cnt++;
        cout << i<<" "<<visited[i]<<endl;
    }
    cout << cnt-1;
    return 0;
}