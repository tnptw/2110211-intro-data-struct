#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template<typename T>
void CP::list<T>::shift_left() {
    if (mSize == 1) {
        return;
    }
    node *first = mHeader->next;
    mHeader->next = mHeader->next->next;
    mHeader->next->prev = mHeader;
    first->next = mHeader;
    first->prev = mHeader->prev;
    mHeader->prev->next = first;
    mHeader->prev = first;
}

#endif
