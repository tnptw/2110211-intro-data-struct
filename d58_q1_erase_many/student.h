#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector.h"

template<typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
    int n = 1;
    int p = 1;
    int j = pos[0];
    for (int i = pos[0] + 1; i < mSize; i++) {
        if (p < pos.size() && i == pos[p]) {
            n++;
            p++;
        } else {
            mData[j++] = mData[j + n];
        }
    }
    mSize -= pos.size();
}

#endif
