// d64_q1b_moving_median : Moving Median
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, w;
    cin >> n >> w;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> tmp(v.begin(), v.begin() + w + 1);
    sort(tmp.begin(), tmp.end());
    cout << tmp[tmp.size() / 2] << ' ';
    for (int i = w + 1; i < v.size(); i++) {
        auto it = lower_bound(tmp.begin(), tmp.end(), v[i - w - 1]);
        tmp.erase(it);
        it = lower_bound(tmp.begin(), tmp.end(), v[i]);
        tmp.insert(it, v[i]);
        cout << tmp[tmp.size() / 2] << ' ';
    }
}

