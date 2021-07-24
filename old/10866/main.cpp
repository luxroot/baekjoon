#include <iostream>
#include <deque>
#include <string>

using namespace std;

int getNum(string line) {
    string a;
}

int main() {
    int n, i;
    string temp;
    deque<int> deq;
    cin >> n;
    cin.ignore();
    for ( i=0 ; i<n ; i++){
        getline(cin, temp);
        if (temp.find("push_back") != string::npos)
            deq.push_back(atoi(temp.substr(10).c_str()));
        else if (temp.find("push_front") != string::npos)
            deq.push_front(atoi(temp.substr(11).c_str()));
        else if (temp.find("pop_front") != string::npos){
            if (deq.empty())
                cout << -1 << endl;
            else{
                cout << deq.front() << endl;
                deq.pop_front();
            }
        }
        else if (temp.find("pop_back") != string::npos){
            if (deq.empty())
                cout << -1 << endl;
            else{
                cout << deq.back() << endl;
                deq.pop_back();
            }
        }
        else if (temp.find("size") != string::npos)
            cout << deq.size() << endl;
        else if (temp.find("empty") != string::npos)
            cout << deq.empty() << endl;
        else if (temp.find("front") != string::npos){
            if (deq.empty())
                cout << -1 << endl;
            else
                cout << deq.front() << endl;
        }
        else if (temp.find("back") != string::npos){
            if(deq.empty())
                cout << -1 << endl;
            else
                cout << deq.back() << endl;
        }
    }
    return 0;
}
