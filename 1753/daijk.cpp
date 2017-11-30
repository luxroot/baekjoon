#include <iostream>
#include <vector>
#include <cstring>

#define SIZE 20000

using namespace std;

int main()
{
    int v,e,start,i,temps,tempe,tempw;
    int adj[SIZE][SIZE];
    int dis[SIZE][SIZE];
    
    memset(adj,0,sizeof(adj));
    
    cin >> v >> e >> start;
    for(i=0;i<e;i++){
        cin >> temps >> tempe >> tempw;
        adj[temps-1][tempe-1] = tempw;
    }
    
    cout << "++++++++" << endl;
    
    for(i=0;i<v;i++){
        for(int j=0;j<v;j++)
            cout << adj[i][j] << " ";
        cout << endl;
    }
    return 0;
}