// d63_q1a_hiatus : Hiatus
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m, a, b;
    vector<int> v;
    cin >> n >> m;
    while (n--) {
        cin >> a >> b;
        a = a * 100 + b;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    while (m--) {
        cin >> a >> b;
        a = a * 100 + b;
        if (a < v[0]) {
            cout << "-1 -1 ";
            continue;
        }
        auto it = lower_bound(v.begin(), v.end(), a);
        if (*it == a) {
            cout << "0 0 ";
            continue;
        }
        it--;
        cout << *it / 100 << " " << *it % 100 << " ";
    }
}