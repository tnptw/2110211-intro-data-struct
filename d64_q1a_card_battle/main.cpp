// d64_q1a_card_battle : Card Battle
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, temp, c;
    map<int, int> mp;
    cin >> n >> m;
    while (n--) {
        cin >> temp;
        mp[temp]++;
    }
    for (int i = 0; i < m; i++) {
        cin >> c;
        while (c--) {
            cin >> temp;
            auto it = mp.upper_bound(temp);
            if (it == mp.end()) {
                cout << i + 1;
                return 0;
            }
            int x = it->first;
            mp[x]--;
            if (mp[x] == 0) {
                mp.erase(x);
            }
        }
    }
    cout << m + 1;
    return 0;
}