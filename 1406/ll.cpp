#include <iostream>
#include <string>

using namespace std;

class node{
public:
    char letter;
    node* left;
    node* right;
    node(){ ; }
    node(char a){
        letter = a;
    }
    void insert(char a){
        node* newNode = new node(a);
        right->left=newNode;
        newNode->right=right;
        newNode->left=this;
        right=newNode;
    }
    ~node(){
        left->right = right;
        right->left = left;
    }
};

class dll{
public:
    node nil;
    node *cursor;
    dll(char a){
        node* newNode = new node;
        newNode->letter = a;
        nil.left = newNode;
        nil.right = newNode;
        newNode->right = &nil;
        newNode->left = &nil;
    }
    void push_back(char a){
        nil.left->insert(a);
    }
    void printList(){
        node* a = nil.right;
        while(a != &nil){
            printf("%c",a->letter);
            a = a->right;
        }
    }
    void printAll(){
        node* a = &nil;
        printf("cursor = %c\n", cursor==&nil? 'N': cursor->letter);
        do {
            if(a == &nil){
                printf("NIL\n");
                a = a->right;
                continue;
            }
            else
                printf("%c  | ",a->letter);
            printf("L: %c  D: %c\n", a->left==&nil? 'N': a->left->letter, a->right == &nil? 'N':a->right->letter);
            a = a->right;
        }
        while(a != &nil);
    }
    void setcursor(){
        cursor = nil.left;
    }
    void moveL(){
        if(cursor == &nil)
            return;
        cursor = cursor->left;
    }
    void moveD(){
        if(cursor == nil.left)
            return;
        cursor = cursor->right;
    }
    void moveB(){
        if(cursor == &nil)
            return;
        cursor = cursor->left;
        delete cursor->right;
    }
    void moveP(char a){
        cursor->insert(a);
        cursor = cursor->right;
    }
};


int main(){
    ios::sync_with_stdio(false);
    string inp;
    int i,n;
    char op,temp;
    cin >> inp;
    dll dlist(inp[0]);
    for(i=1;i<inp.size();i++)
        dlist.push_back(inp[i]);
    dlist.setcursor();
    cin >> n;
    while(n--){
        cin >> op;
        switch(op){
            case 'P':
                cin >> temp;
                dlist.moveP(temp);
                break;
            case 'L':
                dlist.moveL();
                break;
            case 'D':
                dlist.moveD();
                break;
            case 'B':
                dlist.moveB();
                break;
        }
        // dlist.printAll();
    }
    dlist.printList();
    return 0;
}