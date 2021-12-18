// ds02_intersection : Intersection

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, i, b;
    cin >> i >> n;
    i += n;
    vector<pair<int, int>> out(i);
    while (i--) {
        cin >> b;
        out[i] = make_pair(b, i < n);
    }
    sort(out.begin(), out.end());
    while (++i < out.size()) {
        if (out[i].first == out[i - 1].first && out[i].second != out[i - 1].second) {
            cout << out[i].first << " ";
        }
    }

    return 0;
}
