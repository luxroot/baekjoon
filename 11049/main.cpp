#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n, tmp, i;
    int s[500][500];
    vector<int> dim;
    memset(s,0,sizeof(s));

    cin >> n >> tmp;
    dim.reserve(n+1);
    dim.push_back(tmp);
    for(i=0;i<n-1;i++){
        cin >> tmp >> tmp;
        dim.push_back(tmp);
    }
    cin >> tmp;
    dim.push_back(tmp);

    for(i=0;i<)

    return 0;
}