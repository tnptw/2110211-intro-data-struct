#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cstdio>
#include "priority_queue.h"
#include <iostream>
#include <cmath>

template<typename T, typename Comp>
bool CP::priority_queue<T, Comp>::find(T k) const {
    for (int i = 0; i < mSize; i++) {
        if (mData[i] == k) {
            return true;
        }
    }
    return false;
}

template<typename T, typename Comp>
int CP::priority_queue<T, Comp>::find_level(T k) const {
    for (int i = mSize; i > 0; i--) {
        if (mData[i - 1] == k) {
            return floor(log(i) / log(2));
        }
    }
    if (mData[0] == k) {
        return 0;
    }
    return -1;
}

#endif

