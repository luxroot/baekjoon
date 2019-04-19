#include <iostream>

using namespace std;

int main(){
    int n,m,k,i,j,l;
    int a[100][100], b[100][100], result[100][100];
    cin >> n >> m ;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    cin >> m >> k;
    for(i=0;i<m;i++){
        for(j=0;j<k;j++){
            cin >> b[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            result[i][j]=0;
            for(l=0;l<m;l++){
                result[i][j]+=a[i][l]*b[l][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            cout << result[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}