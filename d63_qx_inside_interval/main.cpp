// d63_qx_inside_interval : Inside Interval
#include <iostream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m, a, b;
    map<int, int> x;
    cin >> n >> m;
    while (n--) {
        cin >> a >> b;
        x[a] = b;
    }
    while (m--) {
        cin >> a;
        auto it = x.lower_bound(a);
        if (it->first == a) {
            cout << "1 ";
        } else if (it == x.end() || it->first > a) {
            it--;
            cout << (a >= it->first && a <= it->second) << " ";
        }
    }
}