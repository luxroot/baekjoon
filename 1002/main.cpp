#include <iostream>
#include <cmath>

using namespace std;

double dist(double x1, double y1, double x2, double y2){
    return sqrt(abs( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) ));
}

int main(){
    int n;
    int x1,x2,y1,y2,r1,r2;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >>x1>>y1>>r1>>x2>>y2>>r2;
        if(x1==x2 && y1==y2){
            if(r1==r2)
                cout << -1 << endl;
            else
                cout << 0 << endl;
            break;
        }
        double dis = dist(x1,y1,x2,y2);
        
		if ((r1 + r2) > dis && abs(r1 - r2) < dis)
			cout << 2 << endl;
		else if ((r1 + r2) == dis || abs(r1-r2)==dis)
			cout << 1 << endl;
		else
			cout << 0 << endl;
    }
    
    return 0;
}