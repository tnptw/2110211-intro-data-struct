#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>
#include <vector>
#include "queue.h"

template<typename T>
std::vector<std::pair<T, size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::map<T, size_t> m;
    std::vector<std::pair<T, size_t>> v;
    for (int i = 0; i < mSize; i++) {
        int pos = (i + mFront) % mCap;
        m[mData[pos]]++;
    }
    for (auto &i: k) {
        v.push_back({i, m[i]});
    }
    return v;
}

#endif