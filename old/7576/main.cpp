#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <algorithm>
#include <iomanip>

int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
int map[1010][1010];

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int i,j,m,n,days,xx,yy;
    queue< pair<int, int> > qu;
    cin >> m >> n;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> map[i][j];
            if(map[i][j] == 1){
                qu.push({i,j});
            }
        }
    }
    while(!qu.empty()){
        auto cur = qu.front();
        qu.pop();
        for (i = 0; i < 4; i++)
        {
            xx = cur.first + dx[i];
            yy = cur.second + dy[i];
            if (xx < 0 || xx >= n || yy < 0 || yy >= m || map[xx][yy])
            {
                continue;
            }
            if (map[xx][yy] == 0)
            {
                map[xx][yy] = map[cur.first][cur.second] + 1;
            }
            qu.push(make_pair(xx, yy));
        }
    }
    int max_val = -1;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            // cout << setw(3) << map[i][j];
            max_val = max(max_val, map[i][j]);
            if(map[i][j] == 0){
                cout << -1;
                return 0;
            }
        }
        // cout << '\n';
    }
    cout << max_val-1;

    return 0;

}