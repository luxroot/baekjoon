#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int people=0, max_people=0x80000000;
    int aboard[4], quit[4];
    int i;
    for(i=0;i<4;i++){
        cin >> quit[i] >> aboard[i];
    }
    for(i=0;i<4;i++){
        people = people+aboard[i]-quit[i];
        max_people = max(max_people,people);
    }
    cout << max_people;
    return 0;
}