#ifndef __STUDENT_H__
#define __STUDENT_H__

template<typename KeyT,
        typename MappedT,
        typename CompareT>
size_t CP::map_bst<KeyT, MappedT, CompareT>::process(node *ptr) const {
    if (ptr == NULL) return 0;
    int children = 0;
    int sum = 0;
    if (ptr->left != NULL) {
        children++;
        sum += process(ptr->left);
    }
    if (ptr->right != NULL) {
        children++;
        sum += process(ptr->right);
    }
    if (children == 1) sum++;
    return sum;
}

template<typename KeyT,
        typename MappedT,
        typename CompareT>
size_t CP::map_bst<KeyT, MappedT, CompareT>::count_unary() const {
    return process(mRoot);
}

#endif