// d62_q3a_heap_descendant : Heap Descendant
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

void descendant(int i, int n) {
    if (i >= n) {
        return;
    }
    v.push_back(i);
    descendant((i * 2) + 1, n);
    descendant((i * 2) + 2, n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    descendant(m, n);
    sort(v.begin(), v.end());
    cout << v.size() << "\n";
    for (int &x: v) {
        cout << x << " ";
    }
}
