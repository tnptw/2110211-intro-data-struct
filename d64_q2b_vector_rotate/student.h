#ifndef __STUDENT_H_
#define __STUDENT_H_

#include<algorithm>

template<typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
    if (k == 0) return;
    int len = k % (last - first);
    std::rotate(first, first + len, last);
}

#endif
