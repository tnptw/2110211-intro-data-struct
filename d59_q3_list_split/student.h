#ifndef __STUDENT_H_
#define __STUDENT_H_

template<typename T>
CP::list<T> CP::list<T>::split(iterator it, size_t pos) {
    CP::list<T> result;
    if (it == end()) {
        return result;
    }
    node *tmp = it.ptr;
    tmp->prev->next = mHeader;
    mHeader->prev->next = result.mHeader;
    result.mHeader->prev = mHeader->prev;
    mHeader->prev = tmp->prev;
    tmp->prev = result.mHeader;
    result.mHeader->next = tmp;

    int size = mSize - pos;
    mSize -= size;
    result.mSize = size;
    return result;
}

#endif
