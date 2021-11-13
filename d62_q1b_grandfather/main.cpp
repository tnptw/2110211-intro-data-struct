// d62_q1b_grandfather : Grandfather
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    string father, son, son2;
    map<string, string> M;
    cin >> n >> m;
    while (n--) {
        cin >> son >> father;
        M[father] = son;
    }
    while (m--) {
        cin >> son >> son2;
        if (M[M[son]] == M[M[son2]] && M[M[son]] != M[""] && son2 != son) {
            cout << "YES"
                 << "\n";
        } else {
            cout << "NO"
                 << "\n";
        }
    }
}
