#include <bits/stdc++.h>

using namespace std;

bool bitmap[65][65];
int n;

char is_uniform(int src_x, int src_y, int dst_x, int dst_y) {
    bool first = bitmap[src_x][src_y];
    for (int i=src_x; i < dst_x; i++) {
        for (int j=src_y; j < dst_y; j++) {
            if (bitmap[i][j] != first) return -1;
        }
    }
    return first ? '1' : '0';
}
string deflate(int src_x, int src_y, int dst_x, int dst_y) {
    char uniform = is_uniform(src_x, src_y, dst_x, dst_y);
    if (uniform != -1) {
        return uniform == '1' ? string("1") : string("0") ;
    }
    int mid_x = (src_x + dst_x)/2;
    int mid_y = (src_y + dst_y)/2;
    string ret;
    ret += "(";
    ret += deflate(src_x, src_y, mid_x, mid_y);
    ret += deflate(src_x, mid_y, mid_x, dst_y);
    ret += deflate(mid_x, src_y, dst_x, mid_y);
    ret += deflate(mid_x, mid_y, dst_x, dst_y);
    ret += ")";
    return ret;
}
int main() {
    cin >> n;
    for (int i=0; i < n; i++) {
        string str;
        cin >> str;
        for (int j=0; j < n; j++) {
            char ch = str[j];
            if (ch == '1') {
                bitmap[i][j] = true;
            }
        }
    }
    cout << deflate(0, 0, n, n) << '\n';
}