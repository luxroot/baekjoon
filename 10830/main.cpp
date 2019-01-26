#include <iostream>
#include <cmath>

using namespace std;

int vecList[40][5][5], vecSize;
unsigned long long times;

void multiply(int a[][5], int b[][5], int result[][5]){
    int i,j,k,sum;
    int c[5][5];
    for(i=0;i<vecSize;i++){
        for(j=0;j<vecSize;j++){
            sum=0;
            for(k=0;k<vecSize;k++){
                sum += a[i][k]*b[k][j];
            }
            c[i][j] = sum%1000;
        }
    }
    for(i=0;i<vecSize;i++){
        for(j=0;j<vecSize;j++){
            result[i][j] = c[i][j];
        }
    }
}

void printVec(int vec[][5]){
    int i,j;
    for(i=0;i<vecSize;i++){
        for(j=0;j<vecSize;j++){
            cout << vec[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main(){
    int i,j,result[5][5]={
        {1,0,0,0,0},
        {0,1,0,0,0},
        {0,0,1,0,0},
        {0,0,0,1,0},
        {0,0,0,0,1}
    };
    ios::sync_with_stdio(false);
    cin >> vecSize >> times;
    for(i=0;i<vecSize;i++){
        for(j=0;j<vecSize;j++){
            cin >> vecList[0][i][j];
        }
    }
    for(i=0;i<log2(times);i++){
        multiply(vecList[i], vecList[i], vecList[i+1]);
    }
    int cnt=0;
    while(times){
        if(times&1){
            multiply(result,vecList[cnt],result);
        }
        cnt++;
        times /= 2;
    }
    printVec(result);
    return 0;
}