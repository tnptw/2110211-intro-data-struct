#ifndef __STUDENT_H_
#define __STUDENT_H_

template<typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    int diff = mCap - mSize;
    int other_diff = other.mCap - other.mSize;
    if (diff == other_diff) {
        return 0;
    } else if (diff < other_diff) {
        return -1;
    }
    return 1;
}

#endif
