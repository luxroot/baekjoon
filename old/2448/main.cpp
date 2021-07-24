#include <iostream>
#include <cmath>

using namespace std;

bool arr[3100][6200];

void draw(int k, int x, int y){
    if(k==0){
        arr[x][y] = true;
        arr[x+1][y-1] = true;
        arr[x+1][y+1] = true;
        int i;
        for(i=0;i<5;i++)
            arr[x+2][y-2+i] = true;
        return;
    }
    draw(k-1,x,y);
    draw(k-1, x+3*(1<<(k-1)), y-3*(1<<(k-1)));
    draw(k-1, x+3*(1<<(k-1)), y+3*(1<<(k-1)));
}

int main(){
    int n,k,i,j;
    cin >> n;
    k = log2(n/3);
    draw(k,0,n-1);
    for(i=0;i<n;i++){
        for(j=0;j<n*2-1;j++){
            if(arr[i][j])
                printf("ㅗ");
            else
                printf("  ");
        }
        if(i != n-1) puts(" ");
    }
}