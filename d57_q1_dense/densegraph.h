#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

#include <vector>

using namespace std;

class DenseGraph {
public:
    DenseGraph() : DenseGraph(3) {}

    DenseGraph(int n_in) : n(n_in), edge(n_in) {
        for (auto &x: edge) {
            x.resize(n_in);
        }
    }

    DenseGraph(const DenseGraph &G) : n(G.n), edge(G.edge) {}

    void AddEdge(int a, int b) {
        edge[a][b] = true;
    }

    void RemoveEdge(int a, int b) {
        edge[a][b] = false;
    }

    bool DoesEdgeExist(int a, int b) const {
        return edge[a][b];
    }

    DenseGraph Transpose() const {
        DenseGraph g(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                g.edge[i][j] = edge[j][i];
            }
        }
        return g;
    }

protected:
    int n;
    vector<vector<bool>> edge;
};

#endif // __DENSE_GRAPH_H__
