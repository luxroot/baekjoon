#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,sum=0,tmp;
    vector<int> a,b;
    cin >> n;
    for(i=0;i<n;i++){
        scanf("%d",&tmp);
        a.push_back(tmp);
    }
    for(i=0;i<n;i++){
        scanf("%d",&tmp);
        b.push_back(tmp);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(i=0;i<n;i++){
        sum+=a[i]*b[n-i-1];
    }
    cout << sum << endl;
    return 0;
}