#ifndef __STUDENT_H_
#define __STUDENT_H_


template<typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
    std::vector<T> res(mSize);
    k = (k < mSize ? k : mSize);
    res.resize(k);
    for (int i = 0; i < k; i++) {
        res[i] = mData[(mFront + i) % mCap];
    }
    return res;
}

template<typename T>
CP::queue<T>::queue(iterator from, iterator to) {
    mCap = to - from;
    mSize = 0;
    mFront = 0;
    mData = new T[mCap]();
    for (auto it = from; it != to; ++it) {
        mData[mSize++] = *it;
    }
}


#endif