#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();
  while(n--) {
    string s, tmp;
    stringstream ss;
    vector<string> arr;
    getline(cin, s);
    ss.str(s);
    while( ss >> tmp ) {
      arr.push_back(tmp);
    }
    for(const auto& it : arr) {
      for(auto rit = it.rbegin(); rit != it.rend(); ++rit) {
        cout << *rit;
      }
      cout << ' ';
    }
    cout << '\n';
  }
  return 0;
}
