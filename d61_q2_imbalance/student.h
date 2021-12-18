typedef std::pair <std::pair<int, int>, KeyT> P;

P rec(node *n) {
    if (!n) return {{0, 0}, KeyT()};
    P l = rec(n->left);
    P r = rec(n->right);
    P g;
    if (l.first.second == r.first.second) {
        g = l.second < r.second ? l : r;
    } else {
        g = l.first.second > r.first.second ? l : r;
    }
    int d = l.first.first > r.first.first ? l.first.first - r.first.first : r.first.first - l.first.first;
    int currentMaxH = l.first.first > r.first.first ? l.first.first : r.first.first;
    currentMaxH++;

    if (d == g.first.second)
        return {{currentMaxH, d}, (!!g.second && n->data.first > g.second ? g.second : n->data.first)};
    if (d >= g.first.second) return {{currentMaxH, d}, n->data.first};
    return {{currentMaxH, g.first.second}, g.second};
}

KeyT getValueOfMostImbalanceNode() {
    return rec(mRoot).second;
}

