#include <iostream>
#include <utility>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n,i,tmp,min=INT_MAX,max=INT_MIN;
    double sum=0;
    vector<int> arr;
    cin >> n;
    for(i=0;i<n;i++){
        scanf("%d",&tmp);
        arr.push_back(tmp);
        if(min>tmp)min=tmp;
        if(max<tmp)max=tmp;
        sum+=tmp;
    }
    sort(arr.begin(), arr.end());

    vector< pair<int, int> > freq;
    freq.push_back( make_pair(INT_MAX,arr[0]) );
    for(i=1;i<n;i++){
        if(arr[i]==freq.back().second)
            freq.back().first--;
        else
            freq.push_back(make_pair(INT_MAX,arr[i]));
    }
    sort(freq.begin(),freq.end());
    cout << (int)floor(sum/n+0.5) << endl;
    cout << arr[(n-1)/2] << endl;
    if(freq[0].first == freq[1].first) cout << freq[1].second << endl;
    else    cout << freq[0].second << endl;
    cout << max-min;
    return 0;
}