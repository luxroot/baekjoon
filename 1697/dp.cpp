#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,k,i;
    char map[100010];
    vector<int> cur;
    cin >> n >> k;
    cur.push_back(n);
    map[n]=0;
    if(n >= k){
        cout << n-k;
        exit(0);
    }
    for(i=1;;i++){
        vector<int> ncur;
        while(!cur.empty()){
            if(cur.back() > 1 && !map[cur.back()-1])
                ncur.push_back(cur.back()-1);
            if(cur.back() < 100005 && !map[cur.back()+1])
                ncur.push_back(cur.back()+1);
            if(cur.back() < 50002 && !map[cur.back()*2])
                ncur.push_back(cur.back()*2);
            cur.pop_back();
        }
        cur=ncur;
        while(!ncur.empty()){
            if(ncur.back() == k)
                goto AA;
            map[ncur.back()]=i;
            ncur.pop_back();
        }
    }
AA:
    // for(int j=0;j<2*k;j++)
    //     cout << j << " : " << (int)map[j] << endl;
    cout << i;
    return 0;
}