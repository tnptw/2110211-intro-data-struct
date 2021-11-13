// d58_q0_rating : CUCAS Rating
#include <iostream>
#include <iomanip>
#include <map>
#include <vector>

using namespace std;

int main() {
    cout << std::fixed << std::setprecision(2);
    string id, name;
    int n, score;
    map<string, vector<int>> m1;
    map<string, vector<int>> m2;
    cin >> n;
    while (n--) {
        cin >> id >> name >> score;
        m1[id].push_back(score);
        m2[name].push_back(score);
    }
    for (const auto &item: m1) {
        double sum = 0;
        for (auto i: item.second) {
            sum += i;
        }
        sum = (sum + 0.0) / (double) item.second.size();
        cout << item.first << " " << sum << "\n";
    }
    for (const auto &item: m2) {
        double sum = 0;
        for (auto i: item.second) {
            sum += i;
        }
        sum = (sum + 0.0) / (double) item.second.size();
        cout << item.first << " " << sum << "\n";
    }
}
