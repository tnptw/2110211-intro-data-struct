// d63_q1b_interval_count : Interval Count
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> v;
    int n, m, k, x;
    cin >> n >> m >> k;
    while (n--) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    while (m--) {
        cin >> x;
        auto front = lower_bound(v.begin(), v.end(), x - k);
        auto back = upper_bound(v.begin(), v.end(), x + k);
        cout << back - front << " ";
    }
}
