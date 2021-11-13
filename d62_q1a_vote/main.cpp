// d62_q1a_vote : Vote
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    string name;
    cin >> n >> m;
    map<string, int> x;
    vector<int> v;
    while (n--) {
        cin >> name;
        if (x.find(name) != x.end()) {
            x[name] += 1;
        } else {
            x[name] = 1;
        }
    }
    v.reserve(x.size());
    for (auto &it: x) {
        v.push_back(it.second);
    }
    sort(v.begin(), v.end(), greater<>());
    if (m > v.size()) {
        m = (int) v.size();
    }
    cout << v[m - 1];
}
