#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int k,n,i,j,t,M,sum=0;
    cin >> M;
    vector<int> parr, carr;
    for(t=0;t<M;t++){
        cin >> k >> n;
        parr.clear();
        carr.clear();
        for(i=0;i<n;i++)
            parr.push_back(i+1);
        for(j=1;j<=k;j++){
            carr.push_back(1);
            for(i=1;i<n;i++)
                carr.push_back(carr.back()+parr[i]);
            parr=carr;
            carr.clear();
            
            // for(i=0;i<n;i++)
            //     cout << i <<" "<<parr[i]<<endl;
        }
        
        cout << parr.back() << endl;
    }
    
}