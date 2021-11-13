// d57_q1_postfix : Evaluate Postfix
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

#include "student.h"

int main() {
    vector<pair<int, int> > v;
    int n, a, b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        v.emplace_back(a, b);
    }
    cout << eval_postfix(v) << endl;
}