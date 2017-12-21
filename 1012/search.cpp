#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;
int arr[60][60];

pair<int,int> find_idx(){
    for(int i=0;i<55;i++){
        for(int j=0;j<55;j++){
            if(arr[i][j] == -1){
                return make_pair(i,j);
            }
        }
    }
    return make_pair(-1,-1);
}

int main()
{
    int t,n,m,k,i,j,tmp1,tmp2;
    // int arr[60][60];
    cin >> t;
    for(int foo=0;foo<t;foo++)
    {
        cin >> m >> n >> k;
        memset(arr,0,sizeof(arr));
        for(i=0;i<k;i++){
            cin>>tmp1>>tmp2;
            arr[tmp2][tmp1]=-1;
        }
        // for(i=0;i<n;i++){
        //     for(j=0;j<m;j++){
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl<<endl<<"-------"<<find_idx().first << find_idx().second << endl;
        pair<int,int> idx=find_idx();
        int cnt=0,x,y;
        while(idx!=make_pair(-1,-1)){
            cnt++;
            idx=find_idx();
            queue<pair<int,int> > q;
            q.push(idx);
            arr[idx.first][idx.second]=cnt;
            // cout <<"##"<<endl;
            while(!q.empty()){
                pair<int,int>c = q.front();
                // cout <<c.first<<c.second<<endl;
                // sleep(1);
                q.pop();
                if(arr[c.first+1][c.second] == -1){
                    q.push(make_pair(c.first+1,c.second));
                    arr[c.first+1][c.second]=cnt;
                }
                if(arr[c.first][c.second+1] == -1){
                    q.push(make_pair(c.first,c.second+1));
                    arr[c.first][c.second+1]=cnt;
                }
                if(c.first>0 && arr[c.first-1][c.second] == -1){
                    q.push(make_pair(c.first-1,c.second));
                    arr[c.first-1][c.second]=cnt;
                }
                if(c.second >0 && arr[c.first][c.second-1] == -1){
                    q.push(make_pair(c.first,c.second-1));
                    arr[c.first][c.second-1]=cnt;
                }
            }
        }
        // for(i=0;i<n;i++){
        //     for(j=0;j<m;j++){
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        if(k==0)    cout << 0;
        else    cout << cnt-1 << endl;
    }
}