/ d57_q0_histogram : Histogram
#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    string name;
    map<string, int> m;
    cin >> n;
    while (n--) {
        cin >> name;
        if (m.find(name) != m.end()) {
            m[name] += 1;
            continue;
        }
        m[name] = 1;
    }
    for (const auto &i: m) {
        if (i.second > 1) {
            cout << i.first << " " << i.second << "\n";
        }
    }
    return 0;
}
