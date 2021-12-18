#ifndef __STUDENT_H_
#define __STUDENT_H_

template<typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
    for (int i = 0; i < mSize; i++) {
        if (other.mSize <= i) return false;
        if (mData[i] < other.mData[i]) return true;
        if (mData[i] > other.mData[i]) return false;
    }
    if (other.mSize > mSize) return true;
    return false;
}

#endif

