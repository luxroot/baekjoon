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
    int t,i,j;
    string tmp;
    cin >> t;
    for(i=0;i<t;i++){
        cin >> tmp;
        for(j=0;j<t;j++){
            arr[i][j]=tmp[j]=='1' ? -1 : 0;
        }
    }

    // for(i=0;i<n;i++){
    //     for(j=0;j<m;j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl<<endl<<"-------"<<find_idx().first << find_idx().second << endl;
    pair<int,int> idx=find_idx();
    int cnt=0;
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
    vector<int> result;
    result.assign(cnt,0);
    for(i=0;i<t;i++){
        for(j=0;j<t;j++){
            if(arr[i][j])
                result[arr[i][j]]++;
        }
    }
    sort(result.begin(),result.end());
    cout << cnt-1 << endl;
    for(i=1;i<cnt;i++){
        cout <<result[i]<<endl;
    }
    return 0;
}