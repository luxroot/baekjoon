#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class student{
public:
    int k,y,s;
    string name;
    student(string _name,int _k,int _y, int _s){
        name = _name;
        k=_k;
        y=_y;
        s=_s;
    }
    student(){
        name = string("aa");
        k=0;
        y=0;
        s=0;
    }

};

bool cmp(student a, student b){
    if(a.k != b.k)
        return a.k > b.k;
    if(a.y != b.y)
        return a.y < b.y;
    if(a.s != b.s)
        return a.s > b.s;
    return a.name < b.name;
}

int main()
{
    int n,tmp1,tmp2,tmp3,i;
    cin >> n;
    vector<student> arr;
    arr.reserve(n);
    for(i=0;i<n;i++)
    {
        char _name[30];
        scanf("%s %d %d %d",_name,&tmp1,&tmp2,&tmp3);
        arr.push_back(student(string(_name),tmp1,tmp2,tmp3));
    }
    sort(arr.begin(),arr.end(),cmp);
    for(i=0;i<n;i++)
        printf("%s\n",arr[i].name.c_str());
}