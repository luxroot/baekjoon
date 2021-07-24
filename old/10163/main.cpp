#include <iostream>

using namespace std;

int paper[105][105];

void fill(int n,int x,int y, int w, int h)
{
    int i,j;
    for(i=x;i<x+w;i++){
        for(j=y;j<y+h;j++)
            paper[i][j]=n;
    }
}

int main()
{
    int N,x,y,w,h,i;
    cin >> N;
    for(i=0;i<N;i++)
    {
        cin >> x >> y >> w >> h;
        fill(i+1,x,y,w,h);
    }
    
    for(i=0;i<N;i++){
        int cnt=0;
        for(int j=0;j<101;j++){
            for(int k=0;k<101;k++){
                if(paper[j][k]==i+1)
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
}