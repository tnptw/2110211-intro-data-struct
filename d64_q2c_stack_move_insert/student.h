#ifndef __STUDENT_H__
#define __STUDENT_H__

template<typename T>
void CP::stack<T>::moveInsert(int k, CP::stack<T> &s2, int m) {
    if (m > (int) s2.size()) m = s2.size();
    expand(mSize + m);
    for (int i = mSize + m - 1; i > (int) mSize + m - 1 - k; i--) {
        mData[i] = mData[i - m];
    }
    for (int i = 0; i < m; i++) {
        mData[mSize + m - 1 - k - i] = s2.mData[s2.mSize - 1 - i];
    }
    mSize += m;
    s2.mSize -= m;
}

#endif

