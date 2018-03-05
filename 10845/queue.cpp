#include<bits/stdc++.h>

using namespace std;

int main()
{
    string inp;
    char op[100];
    int n,i,num;
    queue<int> q;
    cin >> n;

    for(i=0;i<n;i++){
        scanf("%s",op);
        if(strcmp(op,"push")==0){
            scanf("%d",&num);
            q.push(num);
        }
        if(!strcmp(op,"pop")){
            if(q.empty()){
                printf("-1\n");
                continue;
            }
            printf("%d\n",q.front());
            q.pop();
        }
        if(!strcmp(op,"size"))
            printf("%d\n",(int)q.size());
        if(!strcmp(op,"empty"))
            printf("%d\n",(int)q.empty());
        if(!strcmp(op,"front")){
            if(q.empty()){
                printf("-1\n");
                continue;
            }
            printf("%d\n",q.front());
        }
        if(!strcmp(op,"back")){
            if(q.empty()){
                printf("-1\n");
                continue;
            }
            printf("%d\n",q.back());
        }

    }
    return 0;
}