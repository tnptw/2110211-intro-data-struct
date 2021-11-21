// d60_q3_lremove_all : List Remove All
#include <vector>
#include <iostream>
#include "list.h"
#include "student.h"
//#pragma once



int main() {
    CP::list<int> l;
    int n, k;
    std::cin >> n >> k;
    while (n--) {
        int x;
        std::cin >> x;
        l.push_back(x);
    }
    l.remove_all(k);
    l.print();
}

