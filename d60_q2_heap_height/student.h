#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <cmath>
#include <iostream>

template<typename T, typename Comp>
int CP::priority_queue<T, Comp>::height() const {
    if (mSize == 0) {
        return -1;
    } else {
        return floor(log(mSize) / log(2));
    }
}

#endif

