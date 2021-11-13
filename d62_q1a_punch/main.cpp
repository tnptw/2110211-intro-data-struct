// d62_q1a_punch : Vector Punch
#include <iostream>
#include <vector>

using namespace std;

vector<string> punch(vector<string> &v, vector<string>::iterator it, int k) {
    //write some code here
    vector<string>::iterator front, back;
    int pos = it - v.begin();
    if (pos - k < 0) {
        front = v.begin();
    } else {
        front = it - k;
    }
    if (pos + k + 1 > v.size()) {
        back = v.end();
    } else {
        back = it + k + 1;
    }
    v.erase(front, back);
    auto something = v;
    return something;
    //don’t forget to return something

}

int main() {
    int n, j, k;
    cin >> n >> j >> k;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);
    for (auto &x: result) {
        cout << x << endl;
    }
}