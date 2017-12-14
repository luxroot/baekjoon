#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class country
{
public:
    int n,g,s,b,r;
    country(int _n,int _g, int _s, int _b){
        n=_n,g=_g,s=_s,b=_b;
    }
};

bool comp(country A, country B){
    if(A.g != B.g) return A.g > B.g;
    if(A.s != B.s) return A.s > B.s;
    return A.b > B.b;
}


int main()
{
    int N,m,i;
    cin >> N >> m;
    vector<country> arr;
    for(i=0;i<N;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        arr.push_back(country(a,b,c,d));
    }
    sort(arr.begin(),arr.end(),comp);
    for(i=0;i<N;i++){
        if(i!=0 && arr[i].g==arr[i-1].g && arr[i].s==arr[i-1].s && arr[i].b==arr[i-1].b)
            arr[i].r=arr[i-1].r;
        else
            arr[i].r=i+1;
        if(arr[i].n == m){
            cout << arr[i].r;
            break;
        }
    }
    return 0;
}