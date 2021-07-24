#include <iostream>
#include <unistd.h>

using namespace std;

bool nums[10010];

int self(int n)
{
    int i=n,sum=n+n%10;
    while (i!= 0){
        i /= 10;
        sum += i%10;
    }
    return sum;
}

int main()
{
    int i,j;
    for(i=1;i<=10000;i++)
    {
        // sleep(1);
        // cout << i << endl;
        if(nums[i]) continue;
        for(j=self(i);j<10000;j=self(j)){
            // cout << j << endl;
            nums[j] = true;
        }
    }
    for(i=1;i<10000;i++)
        if (!nums[i])
            cout << i << endl;
    
    return 0;
}