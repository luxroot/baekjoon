#include <bits/stdc++.h>

using namespace std;
vector< pair<int,int> > edges;
vector<bool> visited;

void dfs(int c){
    cout << c << ' ';
    visited[c]=true;
    for(int i=0;i<edges.size();i++){
        if(edges[i].first == c && visited[edges[i].second] == false){
            // cout << c <<' ';
            dfs(edges[i].second);
        }
    }
}

int main()
{
    int n,m,v,i,t1,t2,c;

    cin >> n >> m >> v;
    for(i=0;i<m;i++){
        cin >> t1 >> t2;
        edges.push_back( make_pair(t1,t2) );
        edges.push_back( make_pair(t2,t1) );
    }
    sort(edges.begin(),edges.end());
    // for(i=0;i<edges.size();i++)cout << edges[i].first << ' '<<edges[i].second << endl;
    visited.assign(n+2,false);
    visited[v]=true;
    dfs(v);
    cout << endl;


    visited.assign(n+2,false);
    queue<int> q;
    q.push(v);
    visited[v]=true;
    cout << v << ' ';
    while(!q.empty()){
        c = q.front();
        q.pop();
        for(i=0;i<edges.size();i++){
            if(edges[i].first == c && visited[edges[i].second] == false){
                q.push(edges[i].second);
                visited[edges[i].second]=true;
                cout << edges[i].second << ' ';
            }
        }
    }
    return 0;
}