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

};

int main(){

   ios::sync_with_stdio(0);
   cin.tie(0);
   Graph g(5);
   g.addEdge(0, 1);
   g.addEdge(0, 1)
   return 0;
}