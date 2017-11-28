#include <iostream>
#include <cstring>
#include <climits>

using namespace std;

int main()
{
    int n,i,j,k,data[1002][5],pop[1002],most=INT_MIN;
    bool ack[1002][1002];
    memset(ack,sizeof(ack),0);
    cin >> n;
    for(i=0;i<n;i++)
        for(j=0;j<5;j++)
            cin >> data[i][j];
    for(i=0;i<5;i++)
        for(j=0;j<n;j++)
            for(k=j+1;k<n;k++)
                if(data[j][i] == data[k][i])
                    ack[j][k]=true;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++)
            pop[i]+=ack[j][i];
        for(j=i+1;j<n;j++)
            pop[i]+=ack[i][j];
    }
    
    for(i=0;i<n;i++)
        if(most < pop[i])
            most = pop[i];

    for(i=0;i<n;i++){
        if(most == pop[i]){
            cout << i+1;
            exit(0);
        }
    }
            
    return 0;
}