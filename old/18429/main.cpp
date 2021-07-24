#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,k,i,tmp,score,result=0;
    vector<int> a, order;
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> tmp;
        a.push_back(tmp-k);
        order.push_back(i);
    }
    do{
        score=0;
        for(auto it : order){
            score+=a[it];
            if(score<0) goto A;
        }
        result++;
        A:
        ;
    }while(next_permutation(order.begin(), order.end()));
    cout << result;
    return 0;
}