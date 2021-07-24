#include <iostream>
#include <string>

using namespace std;

int nodeNum;

class node{
public:
    int num;
    int letter;
    node* left;
    node* right;
    node(){ ; }
    node(int a){
        letter = a;
    }
    void insert(int a){
        node* newNode = new node(a);
        newNode->num = ++nodeNum;
        right->left=newNode;
        newNode->right=right;
        newNode->left=this;
        right=newNode;
    }
};

class dll{
public:
    node nil;
    node *cursor;
    dll(int a, int b){
        node* newNode = new node;
        nil.letter = a;
        newNode->letter = b;
        nil.num = ++nodeNum;
        newNode->num = ++nodeNum;
        nil.left = newNode;
        nil.right = newNode;
        newNode->right = &nil;
        newNode->left = &nil;
    }
    void push_back(int a){
        nil.left->insert(a);
    }
    void pop(){
        printf("%d ", cursor->num);
        node* orig=cursor;
        int a = cursor->letter;
        if (a>0){
            for(int i = 0;i<a;i++){
                cursor = cursor->right;
                if(cursor == orig)
                    cursor = cursor->right;
            }
        }
        else{
            for(int i=0;i<-1*a;i++){
                cursor = cursor->left;
                if(cursor == orig)
                    cursor = cursor->left;
            }
        }
        orig->left->right=orig->right;
        orig->right->left=orig->left;
    }
    void setcursor(){
        cursor = &nil;
    }
    void printAll(){
        node* a = cursor;
        do{
            printf("%3d | %3d |  ",a->num, a->letter);
            printf("L: %3d  R: %3d", a->left->num,a->right->num);
            if(cursor == a)printf(" <-");
            printf("\n");
            a = a->right;
        }while(a != cursor);
    }
};


int main(){
    // ios::sync_with_stdio(false);
    int i,temp,n;
    cin >> n;
    if(n==1){
        cin >> n;
        cout << n;
        return 0;
    }
    cin >> i >> temp;
    dll dlist(i,temp);
    for(i=3;i<=n;i++){
        cin >> temp;
        dlist.push_back(temp);
    }
    dlist.setcursor();
    for(i=0;i<n-1;i++){
        dlist.pop();
    }
    printf("%d",dlist.cursor->num);

    return 0;
}