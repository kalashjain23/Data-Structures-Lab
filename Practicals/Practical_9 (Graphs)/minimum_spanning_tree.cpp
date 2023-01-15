/* Implement Minimum Spanning Tree (MST) using the greedy Kruskal’s algorithm. A MST or
minimum weight spanning tree for a weighted, connected, undirected graph is a spanning tree
with a weight less than or equal to the weight of every other spanning tree. The weight of a
spanning tree is the sum of weights given to each edge of the spanning tree */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void edge(vector<pair<int, pair<int, int>>> &adj, int u, int v, int w){
    adj.push_back({w, {u, v}});
}

int find(int parent[], int i){
    if(parent[i] == -1){
        return i;
    }

    return find(parent, parent[i]);
}

void Union(int parent[], int x, int y){
    int xset = find(parent, x);
    int yset = find(parent, y);

    if(xset != yset){
        parent[xset] = yset;
    }
}

void kruskal(vector<pair<int, pair<int, int>>> adj, int V){
    int parent[V];
    int cost = 0;

    for(int i = 0; i < V; i++){
        parent[i] = -1;
    }

    sort(adj.begin(), adj.end());

    for(int i = 0; i < adj.size(); i++){
        int u = adj[i].second.first;
        int v = adj[i].second.second;
        int w = adj[i].first;

        if(find(parent, u) != find(parent, v)){
            cost += w;
            Union(parent, u, v);
        }
    }

    cout << cost << endl;
}

int main(){
    vector<pair<int, pair<int, int>>> adj;
    int V = 4;

    edge(adj, 0, 1, 10);
    edge(adj, 0, 2, 6);
    edge(adj, 0, 3, 5);
    edge(adj, 1, 3, 15);
    edge(adj, 2, 3, 4);

    kruskal(adj, V);

    return 0;
}
