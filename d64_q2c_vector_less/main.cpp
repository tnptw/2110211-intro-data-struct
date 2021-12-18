// d64_q2c_vector_less : Vector Less
#include <iostream>
#include <string>
#include "vector.h"
#include "student.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    std::ios_base::sync_with_stdio(false);std::cin.tie(0);
    int n,m;
    cin >> n >> m;
    CP::vector<int> a(n);
    for (int i = 0;i < n;i++) cin >> a[i];
    CP::vector<int> b(m);
    for (int i = 0;i < m;i++) cin >> b[i];
    cout << (a < b) << endl;
    cout << (b < a) << endl;
}
