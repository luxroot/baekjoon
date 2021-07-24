#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    cin >> n;
    for(i=0;i<n;i++){
        int sy=0,sk=0,y,k;
        for(j=0;j<9;j++){
            cin >> y >> k;
            sy+=y;
            sk+=k;
        }
        if(sy==sk){
            cout << "Draw\n";
            continue;
        }
        cout << (sy>sk? "Yonsei" : "Korea") << endl;
    }
    return 0;
}