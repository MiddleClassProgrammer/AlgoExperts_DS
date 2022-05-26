#include <iostream>
#include <vector>

void add_edge(std::vector<int> adj[], int a, int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
    std::cout<<adj->size()<<"\n";

    for(int i=0; i<adj->size();i++){
        std::cout<<"vertex:"<<i<<"=>>"<<adj->at(i);

    }
    std::cout<<"\n";
}
void add_edge();
int main(){
    int v=4;
    std::vector<int> adj[v];
    add_edge(adj,0,1);
    add_edge(adj,1,2);
    add_edge(adj,0,2);
    add_edge(adj,1,3);

    return 0;
}