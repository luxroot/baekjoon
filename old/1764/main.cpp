#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,i;
    char asdf[30];
    map<string,bool> first;
    map<string,bool>::iterator iter;
    vector<string> result;
    string temp;
    cin >> n >> m;
    for(i=0;i<n;i++)
    {
        scanf("%s",asdf);
        first.insert(pair<string,bool>(string(asdf),true));
    }
    for(i=0;i<m;i++){
        scanf("%s",asdf);
        temp=string(asdf);
        iter=first.find(temp);
        if ( iter != first.end() )
            result.push_back(temp);
    }
    sort(result.begin(),result.end());
    printf("%d\n",(int)result.size());
    for(i=0;i<result.size();i++)
        printf("%s\n",result[i].c_str());
    return 0;
}