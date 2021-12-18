#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template<typename T, typename Comp>
std::vector<T> CP::priority_queue<T, Comp>::at_level(size_t k) const {
    int a, b;
    a = (1 << k) - 1;
    b = (1 << (k + 1)) - 1;
    b = std::min(b, (int) mSize);
    if (a >= b)
        return std::vector<T>();

    std::vector<T> r(b - a);
    for (int i = a; i < b; i++) {
        r[i - a] = mData[i];
    }
    sort(r.begin(), r.end(), mLess);
    reverse(r.begin(), r.end());
    return r;
}

#endif


