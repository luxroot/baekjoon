#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,k,i,cnt=0;
    char map[100100];
    vector<int> cur;
    cin >> n >> k;
    cur.push_back(n);
    map[n]=0;
    if(n >= k){
        cout << n-k << endl << 1 << endl;
        exit(0);
    }
    for(i=1;;i++){
        vector<int> ncur;
        while(!cur.empty()){
            if(cur.back() > 1 && !map[cur.back()-1])
                ncur.push_back(cur.back()-1);
            if(cur.back() < 100050 && !map[cur.back()+1])
                ncur.push_back(cur.back()+1);
            if(cur.back() < 50030 && !map[cur.back()*2])
                ncur.push_back(cur.back()*2);
            cur.pop_back();
        }
        cur=ncur;
        while(!ncur.empty()){
            if(ncur.back() == k)
                cnt++;
            map[ncur.back()]=i;
            ncur.pop_back();
        }
        if(cnt)
            goto AA;
    }
AA:
    // for(int j=0;j<2*k;j++)
    //     cout << j << " : " << (int)map[j] << endl;
    cout << i << endl << cnt;
    return 0;
}