#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template<typename T>
void CP::queue<T>::reverse(int a, int b) {
    a = (a + mFront) % mCap;
    b = (b + mFront) % mCap;
    if (b < a) b += mCap;

    while (a < b) {
        std::swap(mData[(a++) % mCap], mData[((b--) + mCap) % mCap]);
    }
}

#endif

