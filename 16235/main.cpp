#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

typedef struct _Ground{
    deque<int> atrees;
    int nut;
    deque<int> dtrees;
}Ground;

vector< vector<Ground> > ground;
vector< vector<int> > nutrient;
int n,m,k,i,j;

void print(){
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << ground[i][j].nut << "{";
            for(auto it :ground[i][j].atrees){
                cout << it << ", ";
            }
            cout << "} ";
        }
        cout << endl;
    }
}


void spring(){
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(auto it : ground[i][j].atrees){
                if(ground[i][j].nut >= it){
                    ground[i][j].nut-=it;
                }
                else{
                    // ground[i][j].dtrees.insert()
                }
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);

    cin >> n >> m >> k;
    ground.reserve(n);
    nutrient.reserve(n);
    for(i=0;i<n;i++){
        ground[i].resize(n);
        nutrient[i].reserve(n);
        for(j=0;j<n;j++){
            ground[i][j].nut=5;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> nutrient[i][j];
        }
    }
    for(i=0;i<m;i++){
        int numOfTrees;
        cin >> j >> k >> numOfTrees;
        ground[j-1][k-1].atrees.push_back(numOfTrees);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sort(ground[i][j].atrees.begin(), ground[i][j].atrees.end());
        }
    }

    print();
    return 0;
}