#include <bits/stdc++.h>

using namespace std;


class Graph{
   int V;
   list<int> *l;

public:
   Graph(int V){
      this->V = V;
      l = new list<int> [V];
   }
void addEdge(int v, int u){
   l[u].push_back(v);
   l[v].push_back(u);
}
void bfs(){
   queue<int> Q;
   vector<bool> vis(V, false);
   Q.push(0);
   vis[0] = true;

   while(Q.size()>0){
      int u = Q.front();
      Q.pop();

      cout<<u<<" ";

      for(int v : l[u]){
         if(!vis[v]){
            vis[v] = true;
            Q.push(v);
         }
      }
   }
   cout<<endl;
}

void dfsHelper(int u, vector<bool> &vis){
   cout<<u<<" ";
   vis[u] = true;

   for(int v: l[u]){
      if(!vis[v]){
         dfsHelper(v,vis);
      }
   }
}
void dfs(){
   int src = 0;
   vector<bool> vis(V, false);

   dfsHelper(src, vis);
   cout<<endl;
}

};

int main(){

   ios::sync_with_stdio(0);
   cin.tie(0);
   int V = 6;
   vector<vector<WeightedGraph>> wg(V);
   Graph g(5);
   g.addEdge(0, 1);
   g.addEdge(1, 2);
   g.addEdge(1, 3);
   g.addEdge(2, 3);
   g.addEdge(2, 4);
   g.bfs();
   g.dfs();
   return 0;
}