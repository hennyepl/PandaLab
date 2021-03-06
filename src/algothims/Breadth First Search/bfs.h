// This header file contanins the function declarations for the Breadth First Search algorithm.
// and the implementation of the algorithm.

#ifndef BFS_H
#define BFS_H

#include <iostream>
#include <iomanip>
#include <queue>


// Graph class contains the data structure for the graph.
class Graph
{
    private:
        int V;
        std::vector<std::vector<int>> adj;
        bool *visited;
    public:
        Graph(int V);
        void addEdge(int source, int destination);
        void removeEdge(int source, int destination);
        void BFS(int vertex);
        
};

// initialize the graph with the number of vertices
Graph::Graph(int V)
{
    this->V = V;
    adj.resize(V);
    visited = new bool[V];
}

// add an edge to the graph
void Graph::addEdge(int source, int destination)
{
    adj[source].push_back(destination);
}

// remove the edge from the graph
void Graph::removeEdge(int source, int destination)
{
    for (int i = 0; i < adj[source].size(); i++)
    {
        if (adj[source][i] == destination)
        {
            adj[source].erase(adj[source].begin() + i);
            break;
        }
    }
}






#endif // BFS_H