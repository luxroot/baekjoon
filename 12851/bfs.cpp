#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int n,k,i,cnt=0;
    char map[100100];
    queue<int> qu;
    cin >> n >> k;
    qu.push(n);
    map[n]=0;
    if(n >= k){
        cout << n-k;
        exit(0);
    }
    
    return 0;
}