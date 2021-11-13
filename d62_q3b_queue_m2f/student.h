#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template<typename T>

void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    T tmp = mData[(mFront + pos) % mCap];
    for (int i = (int) pos; i > 0; i--) {
        int before = i - 1;
        mData[(mFront + i) % mCap] = mData[(mFront + before) % mCap];
    }
    mData[mFront] = tmp;
}

#endif
