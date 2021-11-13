#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
#include <unordered_set>
#include "vector.h"
//you are allowed to use any data structure


template<typename T>
void CP::vector<T>::uniq() {
    std::unordered_set<T> result;
    T *tmp = new T[mSize]();
    int pos = 0;
    for (int i = 0; i < mSize; i++) {
        if (result.find(mData[i]) == result.end()) {
            result.insert(mData[i]);
            tmp[pos++] = mData[i];
        }
    }
    delete[] mData;
    mData = tmp;
    mSize = pos;
}

#endif
