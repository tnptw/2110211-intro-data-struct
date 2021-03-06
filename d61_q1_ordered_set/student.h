#include <vector>
#include <map>

using namespace std;

template<typename T>
vector<T> Union(const vector<T> &A, const vector<T> &B) {
    vector<T> v;
    map<T, bool> mp;

    for (auto &x: A) {
        v.push_back(x);
        mp[x] = true;
    }
    for (auto &x: B) {
        if (mp[x]) continue;
        v.push_back(x);
        mp[x] = true;
    }

    return v;
}

template<typename T>
vector<T> Intersect(const vector<T> &A, const vector<T> &B) {
    vector<T> v;
    map<T, bool> mp;

    for (auto &x: B)
        mp[x] = true;
    for (auto &x: A) {
        if (mp[x]) v.push_back(x);
    }
    return v;
}

