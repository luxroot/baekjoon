#include <iostream>
#include <map>

using namespace std;

int main()
{
    int N,M,i,tmp;
    map<int,bool> m;
    map<int,bool>::iterator iter;
    cin >> N;
    for(i=0;i<N;i++){
        scanf("%d",&tmp);
        m.insert(pair<int,bool>(tmp,true));
    }
    cin >> M;
    for(i=0;i<M;i++){
        scanf("%d",&tmp);
        iter = m.find(tmp);
        if(iter != m.end())
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}