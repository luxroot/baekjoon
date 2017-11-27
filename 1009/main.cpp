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

void printResult(int a, int b)
{
    int len,i;
    len = getLen(b);
    vector<long long> arr;
    arr.reserve(len);
    string bin = bitset<32>(b).to_string();
    bin = bin.substr(32-len);
    arr.push_back(a%10);
    for(i=1;i<len;i++)
        arr.push_back((arr.back()*arr.back())%10);
    
    int result = 1;    
    for(i=0;i<len;i++)
        if(bin[i] == '1')
            result = result*arr[len-i-1] % 10;
    if (result == 0)
        cout << 10 << endl;
    else
        cout << result << endl;
}

int main()
{
    int n,a,b;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        printResult(a,b);
    }
    return 0;
}
