// ex00e3 : Check Mapping
#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > n || x < 1) {
            cout << "NO";
            return 0;
        } else {
            s.insert(x);
        }
    }
    if (s.size() != n) {
        cout << "NO";
        return 0;
    } else {
        cout << "YES";
    }
}