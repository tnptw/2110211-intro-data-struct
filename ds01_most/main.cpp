// ds01_most : Most Frequent Word
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n, count;
    int max = -1;
    string name, max_name;
    map<string, int> m;
    cin >> n;
    while (n--) {
        cin >> name;
        if (m.find(name) != m.end()) {
            m[name] += 1;
        } else {
            m[name] = 1;
        }
        count = m[name];
        if (count > max || (count == max && name >= max_name)) {
            max = count;
            max_name = name;
        }
    }
    cout << max_name << " " << max << endl;
}