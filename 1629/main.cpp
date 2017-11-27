#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

int getLen(int a){
    int cnt=0;
    while(a!=0){
        cnt++;
        a/=2;
    }
    return cnt;
}

int main()
{
    int a,b,c,len,i;
    cin >> a >> b >> c;
    len = getLen(b);
    vector<long long> arr;
    arr.reserve(len);
    string bin = bitset<32>(b).to_string();
    bin = bin.substr(32-len);
    arr.push_back(a%c);
    for(i=1;i<len;i++)
        arr.push_back(((arr.back()%c)*(arr.back()%c))%c);
        
    for(i=0;i<len;i++)
        cout << i << " : " << arr[i] << endl;
    cout << endl << bin << endl;    
        
    int result = 1;    
    for(i=0;i<len;i++)
        if(bin[i] == '1')
            result = result*arr[len-i-1] % c;
    
    cout << result;
    return 0;
}
