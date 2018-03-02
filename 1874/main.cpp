#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

int total_num;
vector<int> remain_num_vec;
int remain_num_vec_index = 0 ;
vector<char> answer_char_queue;
queue<int> want_print;
stack<int> find_stack;

int main() {
    cin >> total_num;

    for (int i = 0; i < total_num; i++) {
        int sub;
        cin >> sub;
        want_print.push(sub);
    }

    for (int i = 0; i < total_num; i++) {
        remain_num_vec.push_back(i+1);
    }

    for (int i = 0; i < want_print.front(); i++) {
        find_stack.push(remain_num_vec[remain_num_vec_index++]);
        answer_char_queue.push_back('+');
    }
    want_print.pop();

    find_stack.pop();
    answer_char_queue.push_back('-');

    while (want_print.size()) {
        int this_print = want_print.front();

        if (find_stack.size() == 0 ) {
            find_stack.push(remain_num_vec[remain_num_vec_index++]);
            answer_char_queue.push_back('+');
        }
        else if (this_print < find_stack.top()) {
            cout << "NO";
            return 0;
        }
        else if (this_print == find_stack.top()) {
            find_stack.pop();
            answer_char_queue.push_back('-');
            want_print.pop();
        }
        else {
            find_stack.push(remain_num_vec[remain_num_vec_index++]);
            answer_char_queue.push_back('+');
        }
    }

    int total_size = answer_char_queue.size();

    for (int i = 0; i < total_size; i++){
        cout << answer_char_queue[i] << "\n";
    }

    return 0;
}