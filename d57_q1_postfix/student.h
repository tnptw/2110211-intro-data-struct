#ifndef D57_Q1_POSTFIX_STUDENT_H
#define D57_Q1_POSTFIX_STUDENT_H

#include <vector>

using namespace std;

int eval_postfix(const vector<pair<int, int>>& v) {
    //WRITE YOUR CODE HERE
    stack<int> s;
    for (auto &x: v) {
        if (x.first == 1) {
            s.push(x.second);
        } else {
            auto b = s.top();
            s.pop();
            auto a = s.top();
            s.pop();
            int out;
            switch (x.second) {
                case 0 :
                    out = a + b;
                    break;
                case 1 :
                    out = a - b;
                    break;
                case 2 :
                    out = a * b;
                    break;
                case 3 :
                    out = a / b;
                    break;
            }
            s.push(out);
        }
    }
    return s.top();
}

#endif //D57_Q1_POSTFIX_STUDENT_H
