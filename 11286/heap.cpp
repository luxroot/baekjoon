#include <iostream>
#include <queue>

using namespace std;

class Compare
{
public:
    bool operator() (const int& a, const int& b) {
        if (abs(a) ==abs(b))
            return a>b;
        return abs(a)>abs(b);
    }
};

int main(){
    priority_queue<int,vector<int>,Compare > pq;
    int n,i,temp;
    cin >> n;
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        if(temp)
            pq.push(temp);
        else{
            if(pq.empty()){
                printf("0\n");
                continue;
            }
            printf("%d\n",pq.top());
            pq.pop();
        }
    }
    return 0;
}