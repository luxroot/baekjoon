#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>

using namespace std;

class Tree {
  public:
    vector<vector<int>> info;
    void insert(int ,int, int);
    void set_parents();
    void set_root();
    void inorder();
  private:
    int cnt = 0;
    map<int, pair<int, int>> nodes;
    int root;
    vector<int> parent;
    void inorder_(int, int);
};

void Tree::insert(int v, int l, int r) {
    nodes.insert({v, {l, r}});
}

void Tree::set_parents() {
    parent.resize(nodes.size() + 2);
    for(const auto & [k, v] : nodes) {
        auto c = nodes.at(k);
        if (c.first != -1)
            parent.at(c.first) = k;
        if (c.second != -1)            
            parent.at(c.second) = k;
    }
}

void Tree::set_root() {
    for(const auto & [k, v] : nodes){
        if (parent.at(k) == 0) {
            root=k;
            return;
        }
    }
}

void Tree::inorder_(int height, int cur) {
    const auto & c = nodes.at(cur);
    if(c.first != -1) {
        inorder_(height+1, c.first);
    }
    info.at(height).push_back(++cnt);
    if(c.second != -1) {
        inorder_(height+1, c.second);
    }
}

void Tree::inorder() {
    inorder_(1, root);
}

int main() {
    int n, i, v, l, r;
    Tree t;
    cin >> n;
    t.info.resize(n+1);
    for(i=1; i<=n; i++) {
        cin >> v >> l >> r;
        t.insert(v, l, r);
    }
    t.set_parents();
    t.set_root();
    t.inorder();
    int which_level = 1, max_width = 0, cur_level = 0;
    for(const auto & info : t.info) {
        int min_elt = 10000, max_elt = 0;
        for(const auto & it : info) {
            min_elt = min(min_elt, it);
            max_elt = max(max_elt, it);
        }
        auto cur_width = max_elt - min_elt + 1;
        if (max_width < cur_width) {
            which_level = cur_level;
            max_width = cur_width;
        }
        cur_level++;
    }
    cout << which_level << ' ' << max_width << endl;
    return 0;
}
