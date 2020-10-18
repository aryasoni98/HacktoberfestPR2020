#include "bits/stdc++.h"
using namespace std;

int n; //n -> number of nodes
queue<int> ans; //queue to print the answer
vector<bool> visited; 
vector<vector<int> > adjList;

void dfs(int u){
    if(visited[u]) return; //if it was previously visited, return
    visited[u] = true;

    for(int i = 0; i < adjList[u].size(); i++){
        int v = adjList[u][i];
        dfs(v);
    }
    ans.push(u);
}

int main(){
    int u, v, start;
    cin >> n >> start;

    adjList.resize(n);
    visited.resize(n);

    while(cin >> u >> v){
        adjList[u].push_back(v);
    }

    dfs(start);

    while(!ans.empty()){
        cout << ans.front() << '\n';
        ans.pop();
    }

    return 0;
}
