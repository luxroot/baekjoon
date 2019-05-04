#include <iostream>
#include <bitset>

using namespace std;

int main(){
    int n,a_num,b_num;
    cin >> n >> a_num >> b_num;
    bitset<20> a(a_num-1),b(b_num-1);

    int i;
    for(i=19;i>=0;i--){
        if(a[i] != b[i]){
            cout << i+1;
            return 0;
        }
    }
    return 0;
}