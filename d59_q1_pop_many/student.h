#ifndef __STUDENT_H_
#define __STUDENT_H_


template<typename T>
void CP::stack<T>::multi_pop(size_t K) {
    K = (K < mSize ? K : mSize);
    mSize -= K;
}

template<typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
    std::stack<T> s;
    K = (K < mSize ? K : mSize);
    for (size_t i = mSize - K; i < mSize; i++) {
        s.push(mData[i]);
    }
    mSize -= K;
    return s;
}

#endif
