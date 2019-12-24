#include <iostream>
#include <utility>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    int n, a, b, i, x, y, z, cur;
    int prev[100001]={0};
    vector< vector< pair<int,int> > > vtx;
    cin >> n >> a >> b;
    vtx.reserve(n+1);
    for(i=0;i<n-1;i++){
        cin >> x >> y >> z;
        vtx[x].push_back({y,z});
        vtx[y].push_back({x,z});
    }
    if(n==1 || a==b){
        cout << 0;
        return 0;
    }

    queue<int> qu;
    qu.push(a);
    prev[a]=-1;
    while(!qu.empty()){
        cur = qu.front();
        qu.pop();
        for(auto it : vtx[cur]){
            if(prev[it.first])  continue;
            prev[it.first]=cur;
            if(it.first == b){
                goto AA;
            }
            qu.push(it.first);
        }
    }
    AA:
    int max_val = -1, sum=0;
    cur = b;
    while(true){
        if(cur==a)  break;
        for(auto it : vtx[cur]){
            if(it.first == prev[cur]){
                max_val = max(it.second,max_val);
                sum += it.second;
                cur=it.first;
                break;
            }
        }
    }

    cout << sum - max_val;
    
    return 0;
}