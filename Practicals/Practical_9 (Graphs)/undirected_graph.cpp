/* 3. Given a directed graph, check whether the graph contains a cycle or not.
Your function should return true if the given graph contains at least one cycle, else return false.
Perform same task for undirected graph as well. */

#include<bits/stdc++.h>

using namespace std;

bool checkForCycle(int node, int parent, vector<int>& vis, vector<int> adj[]) {
    vis[node] = 1;

    for (auto it: adj[node]) {
        if (!vis[it]) {
            if (checkForCycle(it, node, vis, adj)) return true;
        }
        else if(it != parent) return true;
    }
    return false;
}

bool isCycle(int V, vector <int> adj[]){
    vector<int> vis(V + 1, 0);

    for (int i = 0; i < V; i++) {
        if (!vis[i]) {
            if (checkForCycle(i, -1, vis, adj)) return true;
        }
    }
    return false;
}

int main() {
    int V = 5;
    int E = 5;
    
    vector<int> adj[V];
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[1].push_back(4);
    adj[4].push_back(1);
    adj[4].push_back(3);
    adj[3].push_back(4);
    adj[2].push_back(3);
    adj[3].push_back(2);

    if(isCycle(V, adj)){
        cout << "Cycle Detected.";
    }
    else{
        cout << "No Cycle Detected.";
    }
}


