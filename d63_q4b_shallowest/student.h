#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template<typename KeyT,
        typename MappedT,
        typename CompareT>
int CP::map_bst<KeyT, MappedT, CompareT>::shallowest_leaf(node *n) {
    if (n == NULL) {
        return mSize + 1;
    }
    if (n->right == NULL && n->left == NULL) {
        return 0;
    }
    return std::min(shallowest_leaf(n->left), shallowest_leaf(n->right)) + 1;
}

template<typename KeyT,
        typename MappedT,
        typename CompareT>
int CP::map_bst<KeyT, MappedT, CompareT>::shallowest_leaf() {
    if (mSize == 0) {
        return -1;
    }
    return shallowest_leaf(mRoot);
}


#endif
