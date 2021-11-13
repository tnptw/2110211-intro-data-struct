// d62_q1c_vector_op : Vector Operation
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<int> x;
    string cmd;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> cmd;
        if (cmd == "pb") {
            cin >> a;
            x.push_back(a);
        } else if (cmd == "sa") {
            sort(x.begin(), x.end());
        } else if (cmd == "sd") {
            sort(x.begin(), x.end(), greater<>());
        } else if (cmd == "r") {
            reverse(x.begin(), x.end());
        } else if (cmd == "d") {
            cin >> a;
            x.erase(x.begin() + a);
        }
    }
    for (int i: x) {
        cout << i << " ";
    }
}
