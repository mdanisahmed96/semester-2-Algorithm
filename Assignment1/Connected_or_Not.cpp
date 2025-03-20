#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj_matrix(n, vector<int>(n, 0));

    // Read edges and populate the adjacency matrix
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj_matrix[u][v] = 1;  // Mark direct connection from u to v
    }

    int q;
    cin >> q;

    // Process each query
    for (int i = 0; i < q; ++i) {
        int u, v;
        cin >> u >> v;
        if (adj_matrix[u][v] == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
