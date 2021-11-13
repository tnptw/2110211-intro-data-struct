// d59_q0_stack_concat : Stack Concatenate
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void stack_concat(stack<int> &s1, stack<int> &s2) {
    //write your code only in this function
    stack<int> temp1;
    stack<int> temp2;
    while (!s2.empty()) {
        int x = s2.top();
        s2.pop();
        temp1.push(x);
    }
    while (!temp1.empty()) {
        int x = temp1.top();
        temp1.pop();
        temp2.push(x);
    }
    while (!s1.empty()) {
        int x = s1.top();
        s1.pop();
        temp1.push(x);
    }
    while (!temp1.empty()) {
        int x = temp1.top();
        temp1.pop();
        temp2.push(x);
    }
    s1 = temp2;
}

int main() {
    //read input
    int n, m;
    int c;
    cin >> n >> m;
    stack<int> s1, s2;
    for (int i = 0; i < n; i++) {
        cin >> c;
        s1.push(c);
    }
    for (int i = 0; i < m; i++) {
        cin >> c;
        s2.push(c);
    }
    //call the function
    stack_concat(s1, s2);
    //display content of the stack
    cout << "S1 has " << s1.size() << endl;
    while (!s1.empty()) {
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << endl;
    //display content of the stack
    cout << "S2 has " << s2.size() << endl;
    while (!s2.empty()) {
        cout << s2.top() << " ";
        s2.pop();
    }
    cout << endl;
}
