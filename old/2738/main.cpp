#include <iostream>
#include <vector>

using namespace std;

int main(){
    int i,j,n,m,tmp;
    vector< vector<int> > arr;

    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(i=0;i<n;i++){
        vector< int > tmpvec;
        for(j=0;j<m;j++){
            cin >> tmp;
            tmpvec.push_back(tmp);
        }
        arr.push_back(tmpvec);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> tmp;
            cout << tmp+arr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}