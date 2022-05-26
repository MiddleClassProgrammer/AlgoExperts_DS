#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void BFS(std::vector<int> adj[], int v, int s)
{

    bool visited[v+1];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }

    std::queue<int> q;
    visited[s]= true;
    q.push(s);

    while(q.empty()==false){
        int temp = q.front();
        q.pop();

        for(int v:adj[temp]){
            if(visited[v]==false){
                std::cout<<"\n"<<v;
                visited[v]=true;
                q.push(v);
            }
        }
    }
    std::cout<<"We have visited all nodes with BFS";
}
void add_edge(std::vector<int> adj[], int a, int b){
    adj[a].push_back(b);
    // adj[b].push_back(a);
}
void BFS();

int main(){
    int v=7, s = 0;
    std::vector<int> adj[v];

    add_edge(adj,0,1);
    add_edge(adj,0,2);
    add_edge(adj,0,5);
    add_edge(adj,1,3);
    add_edge(adj,2,4);
    add_edge(adj,3,5);
    add_edge(adj,4,5);


    BFS(adj, v,s);

    return 0;
}
