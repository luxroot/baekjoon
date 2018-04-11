#include <iostream>

using namespace std;

void swap(int a[], int x, int y){
    int tmp = a[x];
    a[x]=a[y];
    a[y]=tmp;
}

int main(){
    int a[101],n,m,x,y,i;
    cin >> n >> m;
    for(i=0;i<n;i++)
        a[i] = i+1;
    while(m--){
        cin >> x >> y;
        swap(a,x-1,y-1);
    }
    for(i=0;i<n;i++)
        cout << a[i] << ' ';
    return 0;
}