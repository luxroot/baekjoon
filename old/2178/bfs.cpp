#include <bits/stdc++.h>

using namespace std;

int v[105][105];

int main()
{
    int n,m,i,j,cnt=1;
    cin >> n >> m;
    for(i=0;i<n;i++){
        string temp;
        cin >> temp;
        for(j=0;j<m;j++){
            v[i][j]=temp[j]-'0';
        }
    }

    queue< pair<int,int> > q;
    pair<int,int> c;
    q.push(make_pair(0,0));
    v[0][0]=1;
    while(!q.empty()){
        c=q.front();
        q.pop();
        if(v[c.first+1][c.second] == 1){
            q.push(make_pair(c.first+1,c.second));
            v[c.first+1][c.second]=v[c.first][c.second]+1;
        }
        if(v[c.first][c.second+1] == 1){
            q.push(make_pair(c.first,c.second+1));
            v[c.first][c.second+1]=v[c.first][c.second]+1;
        }
        if(c.first>0 && v[c.first-1][c.second] == 1){
            q.push(make_pair(c.first-1,c.second));
            v[c.first-1][c.second]=v[c.first][c.second]+1;
        }
        if(c.second >0 && v[c.first][c.second-1] == 1){
            q.push(make_pair(c.first,c.second-1));
            v[c.first][c.second-1]=v[c.first][c.second]+1;
        }
    }
    cout<<v[n-1][m-1];
    return 0;
}