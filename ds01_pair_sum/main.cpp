// ds01_pair_sum : Pair Sum
#include<iostream>
#include<set>

using namespace std;

int main() {
    int m, n, temp, target;
    bool found;
    set<int> s{};
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        s.insert(temp);
    }
    while (m--) {
        cin >> target;
        found = false;
        for (auto it = s.begin(); it != s.end(); ++it) {
            auto result = target - *it;
            if (s.find(result) != s.end() && result != *it) {
                found = true;
                break;
            }
        }
        if (found) {
            cout << "YES"
                 << "\n";
        } else {
            cout << "NO"
                 << "\n";
        }
    }
}