/* 3. Given a directed graph, check whether the graph contains a cycle or not.
Your function should return true if the given graph contains at least one cycle, else return false.
Perform same task for undirected graph as well. */

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void edge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}

bool dfs(int s, vector<int> adj[], bool visit[], bool rec[]){
    if(!visit[s]){
        visit[s] = true;
        rec[s] = true;

        for(int i = 0; i < adj[s].size(); i++){
            if(!visit[adj[s][i]] && dfs(adj[s][i], adj, visit, rec)){
                return true;
            }
            else if(rec[adj[s][i]]){
                return true;
            }
        }
    }

    rec[s] = false;
    return false;
}

bool isCyclic(vector<int> adj[], int V){
    bool visit[V];
    bool rec[V];

    for(int i = 0; i < V; i++){
        visit[i] = false;
        rec[i] = false;
    }

    for(int i = 0; i < V; i++){
        if(dfs(i, adj, visit, rec)){
            return true;
        }
    }

    return false;
}

int main(){
    vector<int> adj[5];
    bool visit[5];
    bool rec[5];

    for(int i = 0; i < 5; i++){
        visit[i] = false;
        rec[i] = false;
    }

    edge(adj, 0, 2);
    edge(adj, 0, 1);
    edge(adj, 1, 3);
    edge(adj, 2, 0);
    edge(adj, 2, 3);

    if(isCyclic(adj, 5)){
        cout << "Graph contains cycle";
    }
    else{
        cout << "Graph doesn't contain cycle";
    }

    return 0;
}

