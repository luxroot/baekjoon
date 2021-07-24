#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>
#include <map>

using namespace std;

struct cmp{
    bool operator()(const pair<int,int> &a, const pair<int,int> &b){
        if(a.second > b.second){
            return true;
        }
        else if(a.second == b.second && a.first > b.first){
            return true;
        }
        return false;
    }
};

int main(){
    int n,i,tmp1,tmp2;
    priority_queue < pair<int,int>, deque<pair<int, int>>, struct cmp> times;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> tmp1 >> tmp2;
        times.push(make_pair(tmp1, tmp2));
    }
    int cnt=0,curtime=0;
    while(!times.empty()){
        auto time_pair = times.top();
        times.pop();
        if(curtime <= time_pair.first){
            // cout << time_pair.first << ' ' << time_pair.second << endl;
            cnt++;
            curtime = time_pair.second;
        }
    }
    cout << cnt;
    return 0;
}