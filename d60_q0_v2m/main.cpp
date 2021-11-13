// d60_q0_v2m : Vector to Map
#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<int, string> vector_to_map(vector<pair<int, string>>::iterator start, vector<
        pair<int, string>>::iterator end) {
    //write your code here
    //you need to declare a map here
    map<int, string> m;
    for (auto it = start; it < end; ++it) {
        if (m.find(it->first) != m.end()) {
            continue;
        } else {
            m[it->first] = it->second;
        }
    }
    return m;
    //do not forget to return the map
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<pair<int, string>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
    }
    for (int i = 0; i < n; i++) {
        cin >> v[i].second;
    }
    map<int, string> m;
    m = vector_to_map(v.begin() + a, v.begin() + b);
    cout << "-------- result -----------" << endl;
    cout << "Size of map = " << m.size() << endl;
    for (auto &x: m) {
        cout << "(" << x.first << "," << x.second << ")" << endl;
    }
}