#ifndef __STUDENT_H_
#define __STUDENT_H_

# include <algorithm>

template<typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
    using std::swap;
    if (a < b) {
        if (a < mData || a >= mData + mSize || b < mData || b >= mData + mSize ||
            a + m - 1 >= mData + mSize || b + m - 1 >= mData + mSize || a + m - 1 >= b || m <= 0) {
            return false;
        }
        for (int i = 0; i < m; i++) {
            swap(*(a + i), *(b + i));
        }
        return true;
    } else if (a > b) {
        if (a < mData || a >= mData + mSize || b < mData || b >= mData + mSize ||
            a + m - 1 >= mData + mSize || b + m - 1 >= mData + mSize || b + m - 1 >= a || m <= 0) {
            return false;
        }
        for (int i = 0; i < m; i++) {
            swap(*(a + i), *(b + i));
        }
        return true;
    } else {
        return false;
    }
}

#endif