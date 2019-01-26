#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    int i, nums[10]={0,};
    cin >> n;
    for(auto it : n){
        nums[it-'0']++;
    }
    nums[6]+=nums[9];
    nums[6]++;
    nums[6]/=2;
    int max=0;
    for(i=0;i<9;i++){
        if(max<nums[i])
            max = nums[i];
    }
    cout << max;
    return 0;
}