void shift(int k) {
    if (mSize <= 1) {
        return;
    }
    if (k > 0) {
        for (int i = 0; i < k; i++) {
            node *first = mHeader->next;
            mHeader->next = first->next;
            first->next->prev = mHeader;
            first->prev = mHeader->prev;
            first->next = mHeader;
            mHeader->prev->next = first;
            mHeader->prev = first;
        }
    }
    if (k < 0) {
        for (int i = 0; i < -k; i++) {
            node *first = mHeader->next;
            node *last = mHeader->prev;
            first->prev = last;
            last->next = first;
            last->prev->next = mHeader;
            mHeader->prev = last->prev;
            last->prev = mHeader;
            mHeader->next = last;
        }
    }
}
