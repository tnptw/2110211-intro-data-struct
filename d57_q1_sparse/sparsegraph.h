#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

#include <vector>
#include <algorithm>

using namespace std;

class SparseGraph {
public:
    SparseGraph() {
        vertex = 3;
    }

    SparseGraph(int n_in) {
        vertex = n_in;
    }

    SparseGraph(const SparseGraph &G) {
        vertex = G.vertex;
        edge = G.edge;
    }

    void AddEdge(int a, int b) {
        if (isTranspose) {
            std::swap(a, b);
        }
        edge.emplace_back(a, b);
    }

    void RemoveEdge(int a, int b) {
        if (isTranspose) {
            std::swap(a, b);
        }
        for (int i = 0; i < edge.size(); i++) {
            if (edge[i].first == a && edge[i].second == b) {
                edge.erase(edge.begin() + i);
                return;
            }
        }
    }

    bool DoesEdgeExist(int a, int b) {
        if (isTranspose) {
            std::swap(a, b);
        }
        if (edge.empty()) {
            return false;
        } else {
            int already = c;
            while (true) {
                if (edge[c].first == a && edge[c].second == b) {
                    return true;
                }
                c++;
                if (edge.size() == c) {
                    c = 0;
                }
                if (already == c) {
                    return false;
                }
            }
        }
    }

    SparseGraph Transpose() const {
        SparseGraph t(*this);
        t.isTranspose = !isTranspose;
        return t;
    }

protected:
    int vertex;
    int c = 0;
    bool isTranspose = false;
    vector<pair<int, int>> edge;
};

#endif // __SPARSE_GRAPH_H__

