#include <vector>
#include <iostream>
#include <algorithm>

#define root(n) (((n)-1)/2)
#define left(n) ((n)*2+1)
#define right(n) ((n)*2+2)

using namespace std;

class heap {
private:
    vector<int> arr;
public:
    void insert(int _key);
    bool isempty();
    int pop();
    int top();
    void print();
};

void heap::insert(int _key){
    arr.push_back(_key);
    int i=arr.size()-1;
    while(true){
        if(arr[i] < arr[root(i)]){
            int temp = arr[i];
            arr[i] = arr[root(i)];
            arr[root(i)] = temp;
            i = root(i);
        }
        else
            break;
    }
}

void heap::print(){
    int i;
    for(i=0;i<arr.size();i++)
        cout << i << " : " << arr[i] << endl;
}

int heap::pop(){
    if(arr.size() == 0)
        return 0;
    int i = arr.size()-1,_ret = arr[0],l,r,m,j;
    arr[0] = arr[i];
    arr.pop_back();
    i=0;
    while(true){
        l=left(i);
        r=right(i);
        if(l==arr.size()-1){
            // printf("called! s: %d i: %d l: %d\n",(int)arr.size(),i,l);
            if(arr[i] > arr[i]){
                int temp = arr[i];
                arr[i] = arr[l];
                arr[l] = temp;
                i=l;
                break;
            }
        }
        if(l>=arr.size()) break;
        m = arr[l] > arr[r] ? r : l;
        if (arr[m] > arr[i])
            break;
        if (m == l){
            int temp = arr[l];
            arr[l] = arr[i];
            arr[i] = temp;
            i = l;
        }
        if (m == r){
            int temp = arr[r];
            arr[r] = arr[i];
            arr[i] = temp;
            i = r;
        }
        // cout << i << m << l << r << endl;
        // print();
    }
    return _ret;
}

int main(){
    heap a;
    int n,i,temp;
    cin >> n;
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        if(temp == -1) a.print();
        else if(temp)
            a.insert(temp);
        else
            printf("%d\n",a.pop());
    }
    return 0;
}