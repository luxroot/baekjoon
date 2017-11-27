#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i, n, sum=0;
    string line;
    cin >> n;
    cin.ignore();
    getline(cin, line);
    for (int i=0; i<n; i++)
        sum += line.at(i)-'0';
    cout << sum;
    return 0;
}