#ifndef __STUDENT_H_
#define __STUDENT_H_

template<typename T>
void CP::vector<T>::mirror() {
    //write your code here
    ensureCapacity(2 * mSize);
    for (int i = 0; i < mSize; i++) {
        mData[2 * mSize - i - 1] = mData[i];
    }
    mSize = 2 * mSize;
}

#endif
