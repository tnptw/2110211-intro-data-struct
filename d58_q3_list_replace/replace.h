void replace(const T &x, list <T> &y) {
    auto it = begin();
    while (it != end()) {
        if (*it == x) {
            for (auto e: y) {
                insert(it, e);
            }
            it = erase(it);
        } else {
            ++it;
        }
    }
}
