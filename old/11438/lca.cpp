#include <iostream>
#include <vector>
#include <cstring>

#define MAX_NODE 100010

using namespace std;

vector<int> adj[MAX_NODE];
int depth[MAX_NODE]={-1,};
int parent[MAX_NODE][20];
int n,m;
bool visited[MAX_NODE];

void dfs(int curr){
    for( int i : adj[curr]){
        if(depth[i] == -1){
        parent[i][0] = curr;
        depth[i] = depth[curr]+1;
        dfs(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int i,j, a, b;
    memset(depth, -1, sizeof(depth));
    cin >> n;

    for(i=0;i<n-1;i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    depth[1]=0;
    dfs(1);

    for(j=1;j<20;j++){
        for(i=0;i<=n;i++){
            if(parent[i][j-1] != 1){
                parent[i][j] = parent[ parent[i][j-1] ][j-1];
            }
        }
    }

    // for(j=0;j<4;j++){
    //     for(i=1;i<=n;i++){
    //         cout << i << j << parent[i][j] << "  ";
    //     }
    //     cout << endl;
    // }

    cin >> m;
    for(i=0;i<m;i++){

    }

    return 0;


}