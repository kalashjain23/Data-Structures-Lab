/* 1. For a given graph 𝐺 = (𝑉, 𝐸), study and implement the Breadth First Search (or traversal) i.e., BFS.
Also, perform complexity analysis of this algorithm in-terms of time and space.
2. For a given graph 𝐺 = (𝑉, 𝐸), study and implement the Depth First Search (or traversal) i.e., DFS.
Also, perform complexity analysis of this algorithm in-terms of time and space. */

#include<bits/stdc++.h>

using namespace std;

void edge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}

void bfs(int s, vector<int> adj[], bool visit[]){
    queue<int> q;
    q.push(s);
    visit[s] = true;

    while(!q.empty()){
        int u = q.front();
        cout << u << " ";
        q.pop();

        for(int i = 0; i < adj[u].size(); i++){
            if(!visit[adj[u][i]]){
                q.push(adj[u][i]);
                visit[adj[u][i]] = true;
            }
        }
    }
}

void dfs(int s, vector<int>adj[], bool visit[]){
    stack<int> stk;
    stk.push(s);
    visit[s] = true;

    while(!stk.empty()){
        int u = stk.top();
        cout << u << " ";
        stk.pop();

        for(int i = 0; i < adj[u].size(); i++){
            if(!visit[adj[u][i]]){
                stk.push(adj[u][i]);
                visit[adj[u][i]] = true;
            }
        }
    }
}

int main(){
    vector<int> adj[5];
    bool visit[5];

    for(int i = 0; i < 5; i++){
        visit[i] = false;
    }

    edge(adj, 0, 2);
    edge(adj, 0, 1);
    edge(adj, 1, 3);
    edge(adj, 2, 0);
    edge(adj, 2, 3);
    edge(adj, 2, 4);

    cout << "BFS traversal is: ";
    bfs(0,adj,visit);
    
    for(int i = 0; i < 5; i++){
        visit[i] = false;
    }
    cout << "DFS traversal is: ";
    dfs(0, adj, visit);
}