#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,m,i,j;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> m;
        vector<int> arr;
        arr.reserve(m);
        double sum=0;
        for(j=0;j<m;j++){
            cin >> arr[j];
            sum += arr[j];
        }
        int cnt=0;
        sum /= m;
        for(j=0;j<m;j++)
            if(arr[j] > sum)
                cnt++;
        printf("%0.3f%%\n",(float)cnt/m*100);
    }
    return 0;
}